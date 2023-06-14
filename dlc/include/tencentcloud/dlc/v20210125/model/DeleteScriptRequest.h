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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETESCRIPTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETESCRIPTREQUEST_H_

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
                * DeleteScript请求参数结构体
                */
                class DeleteScriptRequest : public AbstractModel
                {
                public:
                    DeleteScriptRequest();
                    ~DeleteScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本id，其可以通过DescribeScripts接口提取
                     * @return ScriptIds 脚本id，其可以通过DescribeScripts接口提取
                     * 
                     */
                    std::vector<std::string> GetScriptIds() const;

                    /**
                     * 设置脚本id，其可以通过DescribeScripts接口提取
                     * @param _scriptIds 脚本id，其可以通过DescribeScripts接口提取
                     * 
                     */
                    void SetScriptIds(const std::vector<std::string>& _scriptIds);

                    /**
                     * 判断参数 ScriptIds 是否已赋值
                     * @return ScriptIds 是否已赋值
                     * 
                     */
                    bool ScriptIdsHasBeenSet() const;

                private:

                    /**
                     * 脚本id，其可以通过DescribeScripts接口提取
                     */
                    std::vector<std::string> m_scriptIds;
                    bool m_scriptIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETESCRIPTREQUEST_H_
