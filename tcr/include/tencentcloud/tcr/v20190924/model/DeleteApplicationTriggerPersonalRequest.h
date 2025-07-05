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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETEAPPLICATIONTRIGGERPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETEAPPLICATIONTRIGGERPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DeleteApplicationTriggerPersonal请求参数结构体
                */
                class DeleteApplicationTriggerPersonalRequest : public AbstractModel
                {
                public:
                    DeleteApplicationTriggerPersonalRequest();
                    ~DeleteApplicationTriggerPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取触发器名称
                     * @return TriggerName 触发器名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发器名称
                     * @param _triggerName 触发器名称
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                private:

                    /**
                     * 触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETEAPPLICATIONTRIGGERPERSONALREQUEST_H_
