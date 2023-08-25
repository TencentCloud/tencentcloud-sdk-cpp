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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DBRELATIONSTATUSITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DBRELATIONSTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 数据库实例的DB绑定关系状态信息。
                */
                class DbRelationStatusItem : public AbstractModel
                {
                public:
                    DbRelationStatusItem();
                    ~DbRelationStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DB名称。
                     * @return DbName DB名称。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置DB名称。
                     * @param _dbName DB名称。
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取DB绑定状态。
                     * @return BindStatus DB绑定状态。
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置DB绑定状态。
                     * @param _bindStatus DB绑定状态。
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取DB有效性状态。
                     * @return ValidStatus DB有效性状态。
                     * 
                     */
                    std::string GetValidStatus() const;

                    /**
                     * 设置DB有效性状态。
                     * @param _validStatus DB有效性状态。
                     * 
                     */
                    void SetValidStatus(const std::string& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                private:

                    /**
                     * DB名称。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * DB绑定状态。
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * DB有效性状态。
                     */
                    std::string m_validStatus;
                    bool m_validStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DBRELATIONSTATUSITEM_H_
