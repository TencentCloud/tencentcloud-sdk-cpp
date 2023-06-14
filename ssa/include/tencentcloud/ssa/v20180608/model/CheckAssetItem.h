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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_CHECKASSETITEM_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_CHECKASSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 检查项资产组每一项
                */
                class CheckAssetItem : public AbstractModel
                {
                public:
                    CheckAssetItem();
                    ~CheckAssetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项下资产组ID
                     * @return Id 检查项下资产组ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置检查项下资产组ID
                     * @param _id 检查项下资产组ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资产组实例id
                     * @return Instid 资产组实例id
                     * 
                     */
                    std::string GetInstid() const;

                    /**
                     * 设置资产组实例id
                     * @param _instid 资产组实例id
                     * 
                     */
                    void SetInstid(const std::string& _instid);

                    /**
                     * 判断参数 Instid 是否已赋值
                     * @return Instid 是否已赋值
                     * 
                     */
                    bool InstidHasBeenSet() const;

                    /**
                     * 获取处置跳转URL
                     * @return Url 处置跳转URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置处置跳转URL
                     * @param _url 处置跳转URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取检查任务id
                     * @return Taskid 检查任务id
                     * 
                     */
                    std::string GetTaskid() const;

                    /**
                     * 设置检查任务id
                     * @param _taskid 检查任务id
                     * 
                     */
                    void SetTaskid(const std::string& _taskid);

                    /**
                     * 判断参数 Taskid 是否已赋值
                     * @return Taskid 是否已赋值
                     * 
                     */
                    bool TaskidHasBeenSet() const;

                    /**
                     * 获取检查结果
                     * @return Result 检查结果
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置检查结果
                     * @param _result 检查结果
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return Updatetime 更新时间
                     * 
                     */
                    std::string GetUpdatetime() const;

                    /**
                     * 设置更新时间
                     * @param _updatetime 更新时间
                     * 
                     */
                    void SetUpdatetime(const std::string& _updatetime);

                    /**
                     * 判断参数 Updatetime 是否已赋值
                     * @return Updatetime 是否已赋值
                     * 
                     */
                    bool UpdatetimeHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取是否忽略
                     * @return IsIgnore 是否忽略
                     * 
                     */
                    int64_t GetIsIgnore() const;

                    /**
                     * 设置是否忽略
                     * @param _isIgnore 是否忽略
                     * 
                     */
                    void SetIsIgnore(const int64_t& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                    /**
                     * 获取检查状态
                     * @return IsChecked 检查状态
                     * 
                     */
                    int64_t GetIsChecked() const;

                    /**
                     * 设置检查状态
                     * @param _isChecked 检查状态
                     * 
                     */
                    void SetIsChecked(const int64_t& _isChecked);

                    /**
                     * 判断参数 IsChecked 是否已赋值
                     * @return IsChecked 是否已赋值
                     * 
                     */
                    bool IsCheckedHasBeenSet() const;

                    /**
                     * 获取资产组信息
                     * @return AssetInfo 资产组信息
                     * 
                     */
                    std::string GetAssetInfo() const;

                    /**
                     * 设置资产组信息
                     * @param _assetInfo 资产组信息
                     * 
                     */
                    void SetAssetInfo(const std::string& _assetInfo);

                    /**
                     * 判断参数 AssetInfo 是否已赋值
                     * @return AssetInfo 是否已赋值
                     * 
                     */
                    bool AssetInfoHasBeenSet() const;

                    /**
                     * 获取资产组ES的_id
                     * @return AssetId 资产组ES的_id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产组ES的_id
                     * @param _assetId 资产组ES的_id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取详情
                     * @return Detail 详情
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置详情
                     * @param _detail 详情
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取备注内容
                     * @return Remarks 备注内容
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置备注内容
                     * @param _remarks 备注内容
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                private:

                    /**
                     * 检查项下资产组ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资产组实例id
                     */
                    std::string m_instid;
                    bool m_instidHasBeenSet;

                    /**
                     * 处置跳转URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 检查任务id
                     */
                    std::string m_taskid;
                    bool m_taskidHasBeenSet;

                    /**
                     * 检查结果
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatetime;
                    bool m_updatetimeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 是否忽略
                     */
                    int64_t m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                    /**
                     * 检查状态
                     */
                    int64_t m_isChecked;
                    bool m_isCheckedHasBeenSet;

                    /**
                     * 资产组信息
                     */
                    std::string m_assetInfo;
                    bool m_assetInfoHasBeenSet;

                    /**
                     * 资产组ES的_id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 详情
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 备注内容
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_CHECKASSETITEM_H_
