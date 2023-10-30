/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_GETDOWNLOADFLOWURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_GETDOWNLOADFLOWURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * GetDownloadFlowUrl返回参数结构体
                */
                class GetDownloadFlowUrlResponse : public AbstractModel
                {
                public:
                    GetDownloadFlowUrlResponse();
                    ~GetDownloadFlowUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取跳转控制台合同下载页面链接 , 5分钟之内有效，且只能访问一次

                     * @return DownLoadUrl 跳转控制台合同下载页面链接 , 5分钟之内有效，且只能访问一次

                     * 
                     */
                    std::string GetDownLoadUrl() const;

                    /**
                     * 判断参数 DownLoadUrl 是否已赋值
                     * @return DownLoadUrl 是否已赋值
                     * 
                     */
                    bool DownLoadUrlHasBeenSet() const;

                private:

                    /**
                     * 跳转控制台合同下载页面链接 , 5分钟之内有效，且只能访问一次

                     */
                    std::string m_downLoadUrl;
                    bool m_downLoadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_GETDOWNLOADFLOWURLRESPONSE_H_
