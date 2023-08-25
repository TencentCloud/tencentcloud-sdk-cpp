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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DBINSTANCEINFO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DBINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DbInfo.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 绑定的实例信息
                */
                class DBInstanceInfo : public AbstractModel
                {
                public:
                    DBInstanceInfo();
                    ~DBInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取数据源绑定的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbInfos 数据源绑定的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DbInfo> GetDbInfos() const;

                    /**
                     * 设置数据源绑定的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbInfos 数据源绑定的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbInfos(const std::vector<DbInfo>& _dbInfos);

                    /**
                     * 判断参数 DbInfos 是否已赋值
                     * @return DbInfos 是否已赋值
                     * 
                     */
                    bool DbInfosHasBeenSet() const;

                private:

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 数据源绑定的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DbInfo> m_dbInfos;
                    bool m_dbInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DBINSTANCEINFO_H_
