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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPPROGRESS_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 全量备份进度
                */
                class FullBackupProgress : public AbstractModel
                {
                public:
                    FullBackupProgress();
                    ~FullBackupProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结构备份进度，取值范围为 0 - 100，单位：百分比。
                     * @return SchemaProgress 结构备份进度，取值范围为 0 - 100，单位：百分比。
                     * 
                     */
                    int64_t GetSchemaProgress() const;

                    /**
                     * 设置结构备份进度，取值范围为 0 - 100，单位：百分比。
                     * @param _schemaProgress 结构备份进度，取值范围为 0 - 100，单位：百分比。
                     * 
                     */
                    void SetSchemaProgress(const int64_t& _schemaProgress);

                    /**
                     * 判断参数 SchemaProgress 是否已赋值
                     * @return SchemaProgress 是否已赋值
                     * 
                     */
                    bool SchemaProgressHasBeenSet() const;

                    /**
                     * 获取数据备份进度，取值范围为 0 - 100，单位：百分比。
                     * @return DataProgress 数据备份进度，取值范围为 0 - 100，单位：百分比。
                     * 
                     */
                    int64_t GetDataProgress() const;

                    /**
                     * 设置数据备份进度，取值范围为 0 - 100，单位：百分比。
                     * @param _dataProgress 数据备份进度，取值范围为 0 - 100，单位：百分比。
                     * 
                     */
                    void SetDataProgress(const int64_t& _dataProgress);

                    /**
                     * 判断参数 DataProgress 是否已赋值
                     * @return DataProgress 是否已赋值
                     * 
                     */
                    bool DataProgressHasBeenSet() const;

                private:

                    /**
                     * 结构备份进度，取值范围为 0 - 100，单位：百分比。
                     */
                    int64_t m_schemaProgress;
                    bool m_schemaProgressHasBeenSet;

                    /**
                     * 数据备份进度，取值范围为 0 - 100，单位：百分比。
                     */
                    int64_t m_dataProgress;
                    bool m_dataProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPPROGRESS_H_
