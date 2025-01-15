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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Instance表detail字段
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警策略是否可用	
                     * @return EnableAlarmStrategy 告警策略是否可用	
                     * 
                     */
                    bool GetEnableAlarmStrategy() const;

                    /**
                     * 设置告警策略是否可用	
                     * @param _enableAlarmStrategy 告警策略是否可用	
                     * 
                     */
                    void SetEnableAlarmStrategy(const bool& _enableAlarmStrategy);

                    /**
                     * 判断参数 EnableAlarmStrategy 是否已赋值
                     * @return EnableAlarmStrategy 是否已赋值
                     * 
                     */
                    bool EnableAlarmStrategyHasBeenSet() const;

                private:

                    /**
                     * 告警策略是否可用	
                     */
                    bool m_enableAlarmStrategy;
                    bool m_enableAlarmStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEDETAIL_H_
