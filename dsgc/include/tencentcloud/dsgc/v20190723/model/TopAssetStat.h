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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_TOPASSETSTAT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_TOPASSETSTAT_H_

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
                * 设敏top资产的信息
                */
                class TopAssetStat : public AbstractModel
                {
                public:
                    TopAssetStat();
                    ~TopAssetStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取db_name
                     * @return SubData db_name
                     * 
                     */
                    std::string GetSubData() const;

                    /**
                     * 设置db_name
                     * @param _subData db_name
                     * 
                     */
                    void SetSubData(const std::string& _subData);

                    /**
                     * 判断参数 SubData 是否已赋值
                     * @return SubData 是否已赋值
                     * 
                     */
                    bool SubDataHasBeenSet() const;

                    /**
                     * 获取敏感个数
                     * @return SensitiveCnt 敏感个数
                     * 
                     */
                    int64_t GetSensitiveCnt() const;

                    /**
                     * 设置敏感个数
                     * @param _sensitiveCnt 敏感个数
                     * 
                     */
                    void SetSensitiveCnt(const int64_t& _sensitiveCnt);

                    /**
                     * 判断参数 SensitiveCnt 是否已赋值
                     * @return SensitiveCnt 是否已赋值
                     * 
                     */
                    bool SensitiveCntHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * db_name
                     */
                    std::string m_subData;
                    bool m_subDataHasBeenSet;

                    /**
                     * 敏感个数
                     */
                    int64_t m_sensitiveCnt;
                    bool m_sensitiveCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_TOPASSETSTAT_H_
