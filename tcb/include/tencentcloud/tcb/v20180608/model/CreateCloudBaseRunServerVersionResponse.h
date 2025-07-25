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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNSERVERVERSIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNSERVERVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateCloudBaseRunServerVersion返回参数结构体
                */
                class CreateCloudBaseRunServerVersionResponse : public AbstractModel
                {
                public:
                    CreateCloudBaseRunServerVersionResponse();
                    ~CreateCloudBaseRunServerVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态(creating/succ)
                     * @return Result 状态(creating/succ)
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取版本名称（只有Result为succ的时候，才会返回VersionName)
                     * @return VersionName 版本名称（只有Result为succ的时候，才会返回VersionName)
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取操作记录id
                     * @return RunId 操作记录id
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                private:

                    /**
                     * 状态(creating/succ)
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 版本名称（只有Result为succ的时候，才会返回VersionName)
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 操作记录id
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNSERVERVERSIONRESPONSE_H_
