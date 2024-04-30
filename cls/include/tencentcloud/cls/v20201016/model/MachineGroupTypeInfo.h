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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEGROUPTYPEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEGROUPTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 机器组类型描述
                */
                class MachineGroupTypeInfo : public AbstractModel
                {
                public:
                    MachineGroupTypeInfo();
                    ~MachineGroupTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器组类型。支持 ip 和 label。
- ip：表示该机器组Values中存的是采集机器的ip地址
- label：表示该机器组Values中存储的是机器的标签
                     * @return Type 机器组类型。支持 ip 和 label。
- ip：表示该机器组Values中存的是采集机器的ip地址
- label：表示该机器组Values中存储的是机器的标签
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置机器组类型。支持 ip 和 label。
- ip：表示该机器组Values中存的是采集机器的ip地址
- label：表示该机器组Values中存储的是机器的标签
                     * @param _type 机器组类型。支持 ip 和 label。
- ip：表示该机器组Values中存的是采集机器的ip地址
- label：表示该机器组Values中存储的是机器的标签
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
                     * 获取机器描述列表。
                     * @return Values 机器描述列表。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置机器描述列表。
                     * @param _values 机器描述列表。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 机器组类型。支持 ip 和 label。
- ip：表示该机器组Values中存的是采集机器的ip地址
- label：表示该机器组Values中存储的是机器的标签
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 机器描述列表。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEGROUPTYPEINFO_H_
