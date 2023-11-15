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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMTYPEINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 告警类型
                */
                class AlarmTypeInfo : public AbstractModel
                {
                public:
                    AlarmTypeInfo();
                    ~AlarmTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警父类型
                     * @return Type 告警父类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置告警父类型
                     * @param _type 告警父类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警子类型(如果传告警子类型，则必传父类型)
                     * @return SubType 告警子类型(如果传告警子类型，则必传父类型)
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置告警子类型(如果传告警子类型，则必传父类型)
                     * @param _subType 告警子类型(如果传告警子类型，则必传父类型)
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                private:

                    /**
                     * 告警父类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警子类型(如果传告警子类型，则必传父类型)
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMTYPEINFO_H_
