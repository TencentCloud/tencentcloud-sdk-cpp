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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RESUMEINSTANCEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RESUMEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ResumeInstance请求参数结构体
                */
                class ResumeInstanceRequest : public AbstractModel
                {
                public:
                    ResumeInstanceRequest();
                    ~ResumeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要恢复的实例id
                     * @return InstanceId 需要恢复的实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要恢复的实例id
                     * @param _instanceId 需要恢复的实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取修改是否包括白名单
                     * @return IsModifyAll 修改是否包括白名单
                     * 
                     */
                    bool GetIsModifyAll() const;

                    /**
                     * 设置修改是否包括白名单
                     * @param _isModifyAll 修改是否包括白名单
                     * 
                     */
                    void SetIsModifyAll(const bool& _isModifyAll);

                    /**
                     * 判断参数 IsModifyAll 是否已赋值
                     * @return IsModifyAll 是否已赋值
                     * 
                     */
                    bool IsModifyAllHasBeenSet() const;

                private:

                    /**
                     * 需要恢复的实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 修改是否包括白名单
                     */
                    bool m_isModifyAll;
                    bool m_isModifyAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RESUMEINSTANCEREQUEST_H_
