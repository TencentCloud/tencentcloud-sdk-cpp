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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEPROTECTSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEPROTECTSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ProtectStat.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWebPageProtectStat返回参数结构体
                */
                class DescribeWebPageProtectStatResponse : public AbstractModel
                {
                public:
                    DescribeWebPageProtectStatResponse();
                    ~DescribeWebPageProtectStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件篡改信息
                     * @return FileTamperNum 文件篡改信息
                     * 
                     */
                    std::vector<ProtectStat> GetFileTamperNum() const;

                    /**
                     * 判断参数 FileTamperNum 是否已赋值
                     * @return FileTamperNum 是否已赋值
                     * 
                     */
                    bool FileTamperNumHasBeenSet() const;

                    /**
                     * 获取防护文件分类信息
                     * @return ProtectFileType 防护文件分类信息
                     * 
                     */
                    std::vector<ProtectStat> GetProtectFileType() const;

                    /**
                     * 判断参数 ProtectFileType 是否已赋值
                     * @return ProtectFileType 是否已赋值
                     * 
                     */
                    bool ProtectFileTypeHasBeenSet() const;

                private:

                    /**
                     * 文件篡改信息
                     */
                    std::vector<ProtectStat> m_fileTamperNum;
                    bool m_fileTamperNumHasBeenSet;

                    /**
                     * 防护文件分类信息
                     */
                    std::vector<ProtectStat> m_protectFileType;
                    bool m_protectFileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEPROTECTSTATRESPONSE_H_
