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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DDLOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DDLOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据同步中的ddl同步处理
                */
                class DdlOption : public AbstractModel
                {
                public:
                    DdlOption();
                    ~DdlOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ddl类型，如Database,Table,View,Index等
                     * @return DdlObject ddl类型，如Database,Table,View,Index等
                     * 
                     */
                    std::string GetDdlObject() const;

                    /**
                     * 设置ddl类型，如Database,Table,View,Index等
                     * @param _ddlObject ddl类型，如Database,Table,View,Index等
                     * 
                     */
                    void SetDdlObject(const std::string& _ddlObject);

                    /**
                     * 判断参数 DdlObject 是否已赋值
                     * @return DdlObject 是否已赋值
                     * 
                     */
                    bool DdlObjectHasBeenSet() const;

                    /**
                     * 获取ddl具体值，对于Database可取值[Create,Drop,Alter]<br>对于Table可取值[Create,Drop,Alter,Truncate,Rename]<br/>对于View可取值[Create,Drop]<br/>对于Index可取值[Create,Drop]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdlValue ddl具体值，对于Database可取值[Create,Drop,Alter]<br>对于Table可取值[Create,Drop,Alter,Truncate,Rename]<br/>对于View可取值[Create,Drop]<br/>对于Index可取值[Create,Drop]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDdlValue() const;

                    /**
                     * 设置ddl具体值，对于Database可取值[Create,Drop,Alter]<br>对于Table可取值[Create,Drop,Alter,Truncate,Rename]<br/>对于View可取值[Create,Drop]<br/>对于Index可取值[Create,Drop]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ddlValue ddl具体值，对于Database可取值[Create,Drop,Alter]<br>对于Table可取值[Create,Drop,Alter,Truncate,Rename]<br/>对于View可取值[Create,Drop]<br/>对于Index可取值[Create,Drop]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDdlValue(const std::vector<std::string>& _ddlValue);

                    /**
                     * 判断参数 DdlValue 是否已赋值
                     * @return DdlValue 是否已赋值
                     * 
                     */
                    bool DdlValueHasBeenSet() const;

                private:

                    /**
                     * ddl类型，如Database,Table,View,Index等
                     */
                    std::string m_ddlObject;
                    bool m_ddlObjectHasBeenSet;

                    /**
                     * ddl具体值，对于Database可取值[Create,Drop,Alter]<br>对于Table可取值[Create,Drop,Alter,Truncate,Rename]<br/>对于View可取值[Create,Drop]<br/>对于Index可取值[Create,Drop]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ddlValue;
                    bool m_ddlValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DDLOPTION_H_
