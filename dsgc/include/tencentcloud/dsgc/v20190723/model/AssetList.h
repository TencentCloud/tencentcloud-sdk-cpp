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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETLIST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DataSourceInfo.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 数据资产报告页面-用户查询入参
                */
                class AssetList : public AbstractModel
                {
                public:
                    AssetList();
                    ~AssetList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源类型
                     * @return DataSourceType 数据源类型
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型
                     * @param _dataSourceType 数据源类型
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取数据源信息
                     * @return DataSourceInfo 数据源信息
                     * 
                     */
                    std::vector<DataSourceInfo> GetDataSourceInfo() const;

                    /**
                     * 设置数据源信息
                     * @param _dataSourceInfo 数据源信息
                     * 
                     */
                    void SetDataSourceInfo(const std::vector<DataSourceInfo>& _dataSourceInfo);

                    /**
                     * 判断参数 DataSourceInfo 是否已赋值
                     * @return DataSourceInfo 是否已赋值
                     * 
                     */
                    bool DataSourceInfoHasBeenSet() const;

                private:

                    /**
                     * 数据源类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 数据源信息
                     */
                    std::vector<DataSourceInfo> m_dataSourceInfo;
                    bool m_dataSourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETLIST_H_
