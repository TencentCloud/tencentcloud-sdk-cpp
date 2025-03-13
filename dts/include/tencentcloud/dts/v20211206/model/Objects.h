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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Database.h>
#include <tencentcloud/dts/v20211206/model/OnlineDDL.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 同步的数据库对对象描述
                */
                class Objects : public AbstractModel
                {
                public:
                    Objects();
                    ~Objects() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步对象类型 Partial(部分对象)
                     * @return Mode 同步对象类型 Partial(部分对象)
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置同步对象类型 Partial(部分对象)
                     * @param _mode 同步对象类型 Partial(部分对象)
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取同步对象，当 Mode 为 Partial 时，不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Databases 同步对象，当 Mode 为 Partial 时，不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Database> GetDatabases() const;

                    /**
                     * 设置同步对象，当 Mode 为 Partial 时，不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databases 同步对象，当 Mode 为 Partial 时，不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabases(const std::vector<Database>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full
                     * @return AdvancedObjects 高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full
                     * 
                     */
                    std::vector<std::string> GetAdvancedObjects() const;

                    /**
                     * 设置高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full
                     * @param _advancedObjects 高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full
                     * 
                     */
                    void SetAdvancedObjects(const std::vector<std::string>& _advancedObjects);

                    /**
                     * 判断参数 AdvancedObjects 是否已赋值
                     * @return AdvancedObjects 是否已赋值
                     * 
                     */
                    bool AdvancedObjectsHasBeenSet() const;

                    /**
                     * 获取OnlineDDL类型，冗余字段不做配置用途
                     * @return OnlineDDL OnlineDDL类型，冗余字段不做配置用途
                     * 
                     */
                    OnlineDDL GetOnlineDDL() const;

                    /**
                     * 设置OnlineDDL类型，冗余字段不做配置用途
                     * @param _onlineDDL OnlineDDL类型，冗余字段不做配置用途
                     * 
                     */
                    void SetOnlineDDL(const OnlineDDL& _onlineDDL);

                    /**
                     * 判断参数 OnlineDDL 是否已赋值
                     * @return OnlineDDL 是否已赋值
                     * 
                     */
                    bool OnlineDDLHasBeenSet() const;

                private:

                    /**
                     * 同步对象类型 Partial(部分对象)
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 同步对象，当 Mode 为 Partial 时，不为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Database> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * 高级对象类型，如function、procedure。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型。当需要同步高级对象时，初始化类型必须包含结构初始化类型，即任务的Options.InitType字段值为Structure或Full
                     */
                    std::vector<std::string> m_advancedObjects;
                    bool m_advancedObjectsHasBeenSet;

                    /**
                     * OnlineDDL类型，冗余字段不做配置用途
                     */
                    OnlineDDL m_onlineDDL;
                    bool m_onlineDDLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
