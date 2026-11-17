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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURELOOKUP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURELOOKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * FeatureLookup
                */
                class FeatureLookup : public AbstractModel
                {
                public:
                    FeatureLookup();
                    ~FeatureLookup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取特征表全名
                     * @return TableName 特征表全名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置特征表全名
                     * @param _tableName 特征表全名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取关联键
                     * @return LookupKey 关联键
                     * 
                     */
                    std::vector<std::string> GetLookupKey() const;

                    /**
                     * 设置关联键
                     * @param _lookupKey 关联键
                     * 
                     */
                    void SetLookupKey(const std::vector<std::string>& _lookupKey);

                    /**
                     * 判断参数 LookupKey 是否已赋值
                     * @return LookupKey 是否已赋值
                     * 
                     */
                    bool LookupKeyHasBeenSet() const;

                    /**
                     * 获取时间戳关联键
                     * @return TimestampLookupKey 时间戳关联键
                     * 
                     */
                    std::string GetTimestampLookupKey() const;

                    /**
                     * 设置时间戳关联键
                     * @param _timestampLookupKey 时间戳关联键
                     * 
                     */
                    void SetTimestampLookupKey(const std::string& _timestampLookupKey);

                    /**
                     * 判断参数 TimestampLookupKey 是否已赋值
                     * @return TimestampLookupKey 是否已赋值
                     * 
                     */
                    bool TimestampLookupKeyHasBeenSet() const;

                    /**
                     * 获取特征列名列表
                     * @return FeatureNames 特征列名列表
                     * 
                     */
                    std::vector<std::string> GetFeatureNames() const;

                    /**
                     * 设置特征列名列表
                     * @param _featureNames 特征列名列表
                     * 
                     */
                    void SetFeatureNames(const std::vector<std::string>& _featureNames);

                    /**
                     * 判断参数 FeatureNames 是否已赋值
                     * @return FeatureNames 是否已赋值
                     * 
                     */
                    bool FeatureNamesHasBeenSet() const;

                private:

                    /**
                     * 特征表全名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 关联键
                     */
                    std::vector<std::string> m_lookupKey;
                    bool m_lookupKeyHasBeenSet;

                    /**
                     * 时间戳关联键
                     */
                    std::string m_timestampLookupKey;
                    bool m_timestampLookupKeyHasBeenSet;

                    /**
                     * 特征列名列表
                     */
                    std::vector<std::string> m_featureNames;
                    bool m_featureNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURELOOKUP_H_
