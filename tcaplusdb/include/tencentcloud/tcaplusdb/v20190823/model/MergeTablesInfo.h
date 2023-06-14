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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CompareTablesInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 合服请求入参
                */
                class MergeTablesInfo : public AbstractModel
                {
                public:
                    MergeTablesInfo();
                    ~MergeTablesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合服的表格信息
                     * @return MergeTables 合服的表格信息
                     * 
                     */
                    CompareTablesInfo GetMergeTables() const;

                    /**
                     * 设置合服的表格信息
                     * @param _mergeTables 合服的表格信息
                     * 
                     */
                    void SetMergeTables(const CompareTablesInfo& _mergeTables);

                    /**
                     * 判断参数 MergeTables 是否已赋值
                     * @return MergeTables 是否已赋值
                     * 
                     */
                    bool MergeTablesHasBeenSet() const;

                    /**
                     * 获取是否检查索引
                     * @return CheckIndex 是否检查索引
                     * 
                     */
                    bool GetCheckIndex() const;

                    /**
                     * 设置是否检查索引
                     * @param _checkIndex 是否检查索引
                     * 
                     */
                    void SetCheckIndex(const bool& _checkIndex);

                    /**
                     * 判断参数 CheckIndex 是否已赋值
                     * @return CheckIndex 是否已赋值
                     * 
                     */
                    bool CheckIndexHasBeenSet() const;

                private:

                    /**
                     * 合服的表格信息
                     */
                    CompareTablesInfo m_mergeTables;
                    bool m_mergeTablesHasBeenSet;

                    /**
                     * 是否检查索引
                     */
                    bool m_checkIndex;
                    bool m_checkIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESINFO_H_
