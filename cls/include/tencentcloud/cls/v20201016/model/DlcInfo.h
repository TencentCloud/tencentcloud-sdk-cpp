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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcTableInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcFiledInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcPartitionInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcPartitionExtra.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 数据湖计算服务（Data Lake Compute，简称DLC）导入配置信息
                */
                class DlcInfo : public AbstractModel
                {
                public:
                    DlcInfo();
                    ~DlcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取dlc表信息
                     * @return TableInfo dlc表信息
                     * 
                     */
                    DlcTableInfo GetTableInfo() const;

                    /**
                     * 设置dlc表信息
                     * @param _tableInfo dlc表信息
                     * 
                     */
                    void SetTableInfo(const DlcTableInfo& _tableInfo);

                    /**
                     * 判断参数 TableInfo 是否已赋值
                     * @return TableInfo 是否已赋值
                     * 
                     */
                    bool TableInfoHasBeenSet() const;

                    /**
                     * 获取dlc数据字段信息
                     * @return FieldInfos dlc数据字段信息
                     * 
                     */
                    std::vector<DlcFiledInfo> GetFieldInfos() const;

                    /**
                     * 设置dlc数据字段信息
                     * @param _fieldInfos dlc数据字段信息
                     * 
                     */
                    void SetFieldInfos(const std::vector<DlcFiledInfo>& _fieldInfos);

                    /**
                     * 判断参数 FieldInfos 是否已赋值
                     * @return FieldInfos 是否已赋值
                     * 
                     */
                    bool FieldInfosHasBeenSet() const;

                    /**
                     * 获取dlc分区信息
                     * @return PartitionInfos dlc分区信息
                     * 
                     */
                    std::vector<DlcPartitionInfo> GetPartitionInfos() const;

                    /**
                     * 设置dlc分区信息
                     * @param _partitionInfos dlc分区信息
                     * 
                     */
                    void SetPartitionInfos(const std::vector<DlcPartitionInfo>& _partitionInfos);

                    /**
                     * 判断参数 PartitionInfos 是否已赋值
                     * @return PartitionInfos 是否已赋值
                     * 
                     */
                    bool PartitionInfosHasBeenSet() const;

                    /**
                     * 获取dlc分区额外信息
                     * @return PartitionExtra dlc分区额外信息
                     * 
                     */
                    DlcPartitionExtra GetPartitionExtra() const;

                    /**
                     * 设置dlc分区额外信息
                     * @param _partitionExtra dlc分区额外信息
                     * 
                     */
                    void SetPartitionExtra(const DlcPartitionExtra& _partitionExtra);

                    /**
                     * 判断参数 PartitionExtra 是否已赋值
                     * @return PartitionExtra 是否已赋值
                     * 
                     */
                    bool PartitionExtraHasBeenSet() const;

                private:

                    /**
                     * dlc表信息
                     */
                    DlcTableInfo m_tableInfo;
                    bool m_tableInfoHasBeenSet;

                    /**
                     * dlc数据字段信息
                     */
                    std::vector<DlcFiledInfo> m_fieldInfos;
                    bool m_fieldInfosHasBeenSet;

                    /**
                     * dlc分区信息
                     */
                    std::vector<DlcPartitionInfo> m_partitionInfos;
                    bool m_partitionInfosHasBeenSet;

                    /**
                     * dlc分区额外信息
                     */
                    DlcPartitionExtra m_partitionExtra;
                    bool m_partitionExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCINFO_H_
