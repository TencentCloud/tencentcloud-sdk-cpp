/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBELAKEFSTASKRESULTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBELAKEFSTASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeLakeFsTaskResult请求参数结构体
                */
                class DescribeLakeFsTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeLakeFsTaskResultRequest();
                    ~DescribeLakeFsTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要访问的任务结果路径
                     * @return FsPath 需要访问的任务结果路径
                     * 
                     */
                    std::string GetFsPath() const;

                    /**
                     * 设置需要访问的任务结果路径
                     * @param _fsPath 需要访问的任务结果路径
                     * 
                     */
                    void SetFsPath(const std::string& _fsPath);

                    /**
                     * 判断参数 FsPath 是否已赋值
                     * @return FsPath 是否已赋值
                     * 
                     */
                    bool FsPathHasBeenSet() const;

                private:

                    /**
                     * 需要访问的任务结果路径
                     */
                    std::string m_fsPath;
                    bool m_fsPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBELAKEFSTASKRESULTREQUEST_H_
