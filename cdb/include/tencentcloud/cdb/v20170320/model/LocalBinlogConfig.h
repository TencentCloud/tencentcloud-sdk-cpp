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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_LOCALBINLOGCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_LOCALBINLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 本地 binlog 保留配置
                */
                class LocalBinlogConfig : public AbstractModel
                {
                public:
                    LocalBinlogConfig();
                    ~LocalBinlogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本地 binlog 保留时长，可取值范围：[6,168]。
                     * @return SaveHours 本地 binlog 保留时长，可取值范围：[6,168]。
                     * 
                     */
                    int64_t GetSaveHours() const;

                    /**
                     * 设置本地 binlog 保留时长，可取值范围：[6,168]。
                     * @param _saveHours 本地 binlog 保留时长，可取值范围：[6,168]。
                     * 
                     */
                    void SetSaveHours(const int64_t& _saveHours);

                    /**
                     * 判断参数 SaveHours 是否已赋值
                     * @return SaveHours 是否已赋值
                     * 
                     */
                    bool SaveHoursHasBeenSet() const;

                    /**
                     * 获取本地 binlog 空间使用率，可取值范围：[30,50]。
                     * @return MaxUsage 本地 binlog 空间使用率，可取值范围：[30,50]。
                     * 
                     */
                    int64_t GetMaxUsage() const;

                    /**
                     * 设置本地 binlog 空间使用率，可取值范围：[30,50]。
                     * @param _maxUsage 本地 binlog 空间使用率，可取值范围：[30,50]。
                     * 
                     */
                    void SetMaxUsage(const int64_t& _maxUsage);

                    /**
                     * 判断参数 MaxUsage 是否已赋值
                     * @return MaxUsage 是否已赋值
                     * 
                     */
                    bool MaxUsageHasBeenSet() const;

                private:

                    /**
                     * 本地 binlog 保留时长，可取值范围：[6,168]。
                     */
                    int64_t m_saveHours;
                    bool m_saveHoursHasBeenSet;

                    /**
                     * 本地 binlog 空间使用率，可取值范围：[30,50]。
                     */
                    int64_t m_maxUsage;
                    bool m_maxUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_LOCALBINLOGCONFIG_H_
