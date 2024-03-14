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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CHECKMIGRATEINDEXMETADATARESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CHECKMIGRATEINDEXMETADATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CheckMigrateIndexMetaData返回参数结构体
                */
                class CheckMigrateIndexMetaDataResponse : public AbstractModel
                {
                public:
                    CheckMigrateIndexMetaDataResponse();
                    ~CheckMigrateIndexMetaDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取不存在于目标索引时间字段相同的字段
                     * @return MappingTimeFieldCheckFailedIndexArr 不存在于目标索引时间字段相同的字段
                     * 
                     */
                    std::vector<std::string> GetMappingTimeFieldCheckFailedIndexArr() const;

                    /**
                     * 判断参数 MappingTimeFieldCheckFailedIndexArr 是否已赋值
                     * @return MappingTimeFieldCheckFailedIndexArr 是否已赋值
                     * 
                     */
                    bool MappingTimeFieldCheckFailedIndexArrHasBeenSet() const;

                    /**
                     * 获取@timestamp不为date类型，与目标索引时间字段冲突
                     * @return MappingTimeTypeCheckFailedIndexArr @timestamp不为date类型，与目标索引时间字段冲突
                     * 
                     */
                    std::vector<std::string> GetMappingTimeTypeCheckFailedIndexArr() const;

                    /**
                     * 判断参数 MappingTimeTypeCheckFailedIndexArr 是否已赋值
                     * @return MappingTimeTypeCheckFailedIndexArr 是否已赋值
                     * 
                     */
                    bool MappingTimeTypeCheckFailedIndexArrHasBeenSet() const;

                    /**
                     * 获取索引的创建时间不在 serverless的存储周期内
                     * @return SettingCheckFailedIndexArr 索引的创建时间不在 serverless的存储周期内
                     * 
                     */
                    std::vector<std::string> GetSettingCheckFailedIndexArr() const;

                    /**
                     * 判断参数 SettingCheckFailedIndexArr 是否已赋值
                     * @return SettingCheckFailedIndexArr 是否已赋值
                     * 
                     */
                    bool SettingCheckFailedIndexArrHasBeenSet() const;

                private:

                    /**
                     * 不存在于目标索引时间字段相同的字段
                     */
                    std::vector<std::string> m_mappingTimeFieldCheckFailedIndexArr;
                    bool m_mappingTimeFieldCheckFailedIndexArrHasBeenSet;

                    /**
                     * @timestamp不为date类型，与目标索引时间字段冲突
                     */
                    std::vector<std::string> m_mappingTimeTypeCheckFailedIndexArr;
                    bool m_mappingTimeTypeCheckFailedIndexArrHasBeenSet;

                    /**
                     * 索引的创建时间不在 serverless的存储周期内
                     */
                    std::vector<std::string> m_settingCheckFailedIndexArr;
                    bool m_settingCheckFailedIndexArrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CHECKMIGRATEINDEXMETADATARESPONSE_H_
