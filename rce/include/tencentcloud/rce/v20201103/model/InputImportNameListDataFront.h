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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTIMPORTNAMELISTDATAFRONT_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTIMPORTNAMELISTDATAFRONT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/DataContentInfo.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 添加名单数据入参
                */
                class InputImportNameListDataFront : public AbstractModel
                {
                public:
                    InputImportNameListDataFront();
                    ~InputImportNameListDataFront() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名单ID
                     * @return NameListId 名单ID
                     * 
                     */
                    int64_t GetNameListId() const;

                    /**
                     * 设置名单ID
                     * @param _nameListId 名单ID
                     * 
                     */
                    void SetNameListId(const int64_t& _nameListId);

                    /**
                     * 判断参数 NameListId 是否已赋值
                     * @return NameListId 是否已赋值
                     * 
                     */
                    bool NameListIdHasBeenSet() const;

                    /**
                     * 获取数据来源，固定传2（手工录入）
                     * @return DataSource 数据来源，固定传2（手工录入）
                     * 
                     */
                    int64_t GetDataSource() const;

                    /**
                     * 设置数据来源，固定传2（手工录入）
                     * @param _dataSource 数据来源，固定传2（手工录入）
                     * 
                     */
                    void SetDataSource(const int64_t& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取黑白名单数据内容
                     * @return DataContentInfo 黑白名单数据内容
                     * 
                     */
                    std::vector<DataContentInfo> GetDataContentInfo() const;

                    /**
                     * 设置黑白名单数据内容
                     * @param _dataContentInfo 黑白名单数据内容
                     * 
                     */
                    void SetDataContentInfo(const std::vector<DataContentInfo>& _dataContentInfo);

                    /**
                     * 判断参数 DataContentInfo 是否已赋值
                     * @return DataContentInfo 是否已赋值
                     * 
                     */
                    bool DataContentInfoHasBeenSet() const;

                private:

                    /**
                     * 名单ID
                     */
                    int64_t m_nameListId;
                    bool m_nameListIdHasBeenSet;

                    /**
                     * 数据来源，固定传2（手工录入）
                     */
                    int64_t m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 黑白名单数据内容
                     */
                    std::vector<DataContentInfo> m_dataContentInfo;
                    bool m_dataContentInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTIMPORTNAMELISTDATAFRONT_H_
