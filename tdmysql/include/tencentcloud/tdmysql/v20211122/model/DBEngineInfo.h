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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DBENGINEINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DBENGINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 数据库引擎信息
                */
                class DBEngineInfo : public AbstractModel
                {
                public:
                    DBEngineInfo();
                    ~DBEngineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>引擎描述</p>
                     * @return Description <p>引擎描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>引擎描述</p>
                     * @param _description <p>引擎描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>是否最新版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return New <p>是否最新版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNew() const;

                    /**
                     * 设置<p>是否最新版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _new <p>是否最新版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNew(const bool& _new);

                    /**
                     * 判断参数 New 是否已赋值
                     * @return New 是否已赋值
                     * 
                     */
                    bool NewHasBeenSet() const;

                    /**
                     * 获取<p>支持的兼容的模式，以,分隔</p>
                     * @return SQLMode <p>支持的兼容的模式，以,分隔</p>
                     * 
                     */
                    std::vector<std::string> GetSQLMode() const;

                    /**
                     * 设置<p>支持的兼容的模式，以,分隔</p>
                     * @param _sQLMode <p>支持的兼容的模式，以,分隔</p>
                     * 
                     */
                    void SetSQLMode(const std::vector<std::string>& _sQLMode);

                    /**
                     * 判断参数 SQLMode 是否已赋值
                     * @return SQLMode 是否已赋值
                     * 
                     */
                    bool SQLModeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持参数模板</p>
                     * @return IsSupportParamTemplate <p>是否支持参数模板</p>
                     * 
                     */
                    bool GetIsSupportParamTemplate() const;

                    /**
                     * 设置<p>是否支持参数模板</p>
                     * @param _isSupportParamTemplate <p>是否支持参数模板</p>
                     * 
                     */
                    void SetIsSupportParamTemplate(const bool& _isSupportParamTemplate);

                    /**
                     * 判断参数 IsSupportParamTemplate 是否已赋值
                     * @return IsSupportParamTemplate 是否已赋值
                     * 
                     */
                    bool IsSupportParamTemplateHasBeenSet() const;

                    /**
                     * 获取<p>是否支持Serverless模式</p>
                     * @return IsSupportServerless <p>是否支持Serverless模式</p>
                     * 
                     */
                    bool GetIsSupportServerless() const;

                    /**
                     * 设置<p>是否支持Serverless模式</p>
                     * @param _isSupportServerless <p>是否支持Serverless模式</p>
                     * 
                     */
                    void SetIsSupportServerless(const bool& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                private:

                    /**
                     * <p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>引擎描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否最新版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_new;
                    bool m_newHasBeenSet;

                    /**
                     * <p>支持的兼容的模式，以,分隔</p>
                     */
                    std::vector<std::string> m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>是否支持参数模板</p>
                     */
                    bool m_isSupportParamTemplate;
                    bool m_isSupportParamTemplateHasBeenSet;

                    /**
                     * <p>是否支持Serverless模式</p>
                     */
                    bool m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DBENGINEINFO_H_
