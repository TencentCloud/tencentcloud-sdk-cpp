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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTACCOUNTGROUPSDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTACCOUNTGROUPSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 多OU组信息
                */
                class DescribeAccountAccountGroupsData : public AbstractModel
                {
                public:
                    DescribeAccountAccountGroupsData();
                    ~DescribeAccountAccountGroupsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupId <p>组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccountGroupId() const;

                    /**
                     * 设置<p>组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupId <p>组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupId(const int64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupName <p>组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置<p>组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupName <p>组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupName(const std::string& _accountGroupName);

                    /**
                     * 判断参数 AccountGroupName 是否已赋值
                     * @return AccountGroupName 是否已赋值
                     * 
                     */
                    bool AccountGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>主组标识(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterFlag <p>主组标识(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMasterFlag() const;

                    /**
                     * 设置<p>主组标识(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterFlag <p>主组标识(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMasterFlag(const int64_t& _masterFlag);

                    /**
                     * 判断参数 MasterFlag 是否已赋值
                     * @return MasterFlag 是否已赋值
                     * 
                     */
                    bool MasterFlagHasBeenSet() const;

                    /**
                     * 获取<p>组路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupNamePaths <p>组路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAccountGroupNamePaths() const;

                    /**
                     * 设置<p>组路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupNamePaths <p>组路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupNamePaths(const std::vector<std::string>& _accountGroupNamePaths);

                    /**
                     * 判断参数 AccountGroupNamePaths 是否已赋值
                     * @return AccountGroupNamePaths 是否已赋值
                     * 
                     */
                    bool AccountGroupNamePathsHasBeenSet() const;

                    /**
                     * 获取<p>组路径Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupPathIds <p>组路径Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetAccountGroupPathIds() const;

                    /**
                     * 设置<p>组路径Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupPathIds <p>组路径Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupPathIds(const std::vector<int64_t>& _accountGroupPathIds);

                    /**
                     * 判断参数 AccountGroupPathIds 是否已赋值
                     * @return AccountGroupPathIds 是否已赋值
                     * 
                     */
                    bool AccountGroupPathIdsHasBeenSet() const;

                private:

                    /**
                     * <p>组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * <p>主组标识(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_masterFlag;
                    bool m_masterFlagHasBeenSet;

                    /**
                     * <p>组路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_accountGroupNamePaths;
                    bool m_accountGroupNamePathsHasBeenSet;

                    /**
                     * <p>组路径Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_accountGroupPathIds;
                    bool m_accountGroupPathIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTACCOUNTGROUPSDATA_H_
