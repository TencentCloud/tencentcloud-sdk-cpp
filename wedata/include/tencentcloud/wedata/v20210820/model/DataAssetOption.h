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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATAASSETOPTION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATAASSETOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据资产操作标记
                */
                class DataAssetOption : public AbstractModel
                {
                public:
                    DataAssetOption();
                    ~DataAssetOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否拥有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasPermission 是否拥有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasPermission() const;

                    /**
                     * 设置是否拥有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasPermission 是否拥有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasPermission(const bool& _hasPermission);

                    /**
                     * 判断参数 HasPermission 是否已赋值
                     * @return HasPermission 是否已赋值
                     * 
                     */
                    bool HasPermissionHasBeenSet() const;

                    /**
                     * 获取是否已收藏
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasFavorite 是否已收藏
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasFavorite() const;

                    /**
                     * 设置是否已收藏
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasFavorite 是否已收藏
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasFavorite(const bool& _hasFavorite);

                    /**
                     * 判断参数 HasFavorite 是否已赋值
                     * @return HasFavorite 是否已赋值
                     * 
                     */
                    bool HasFavoriteHasBeenSet() const;

                    /**
                     * 获取其他的操作类型:
取值：
ProjectIdNull -当前表未设置归属项目；
NotCluster - 非系统源不支持权限申请；
ProjectDisabled - 当前项目已被禁用；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherOperate 其他的操作类型:
取值：
ProjectIdNull -当前表未设置归属项目；
NotCluster - 非系统源不支持权限申请；
ProjectDisabled - 当前项目已被禁用；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtherOperate() const;

                    /**
                     * 设置其他的操作类型:
取值：
ProjectIdNull -当前表未设置归属项目；
NotCluster - 非系统源不支持权限申请；
ProjectDisabled - 当前项目已被禁用；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherOperate 其他的操作类型:
取值：
ProjectIdNull -当前表未设置归属项目；
NotCluster - 非系统源不支持权限申请；
ProjectDisabled - 当前项目已被禁用；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherOperate(const std::string& _otherOperate);

                    /**
                     * 判断参数 OtherOperate 是否已赋值
                     * @return OtherOperate 是否已赋值
                     * 
                     */
                    bool OtherOperateHasBeenSet() const;

                    /**
                     * 获取被收藏数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FavoriteCount 被收藏数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFavoriteCount() const;

                    /**
                     * 设置被收藏数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _favoriteCount 被收藏数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFavoriteCount(const int64_t& _favoriteCount);

                    /**
                     * 判断参数 FavoriteCount 是否已赋值
                     * @return FavoriteCount 是否已赋值
                     * 
                     */
                    bool FavoriteCountHasBeenSet() const;

                    /**
                     * 获取是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasBizPermission 是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasBizPermission() const;

                    /**
                     * 设置是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasBizPermission 是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasBizPermission(const bool& _hasBizPermission);

                    /**
                     * 判断参数 HasBizPermission 是否已赋值
                     * @return HasBizPermission 是否已赋值
                     * 
                     */
                    bool HasBizPermissionHasBeenSet() const;

                    /**
                     * 获取是否有修改归属项目权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasProjectPermission 是否有修改归属项目权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasProjectPermission() const;

                    /**
                     * 设置是否有修改归属项目权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasProjectPermission 是否有修改归属项目权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasProjectPermission(const bool& _hasProjectPermission);

                    /**
                     * 判断参数 HasProjectPermission 是否已赋值
                     * @return HasProjectPermission 是否已赋值
                     * 
                     */
                    bool HasProjectPermissionHasBeenSet() const;

                    /**
                     * 获取用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorTips 用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorTips() const;

                    /**
                     * 设置用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorTips 用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorTips(const std::string& _errorTips);

                    /**
                     * 判断参数 ErrorTips 是否已赋值
                     * @return ErrorTips 是否已赋值
                     * 
                     */
                    bool ErrorTipsHasBeenSet() const;

                private:

                    /**
                     * 是否拥有权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasPermission;
                    bool m_hasPermissionHasBeenSet;

                    /**
                     * 是否已收藏
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasFavorite;
                    bool m_hasFavoriteHasBeenSet;

                    /**
                     * 其他的操作类型:
取值：
ProjectIdNull -当前表未设置归属项目；
NotCluster - 非系统源不支持权限申请；
ProjectDisabled - 当前项目已被禁用；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherOperate;
                    bool m_otherOperateHasBeenSet;

                    /**
                     * 被收藏数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_favoriteCount;
                    bool m_favoriteCountHasBeenSet;

                    /**
                     * 是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasBizPermission;
                    bool m_hasBizPermissionHasBeenSet;

                    /**
                     * 是否有修改归属项目权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasProjectPermission;
                    bool m_hasProjectPermissionHasBeenSet;

                    /**
                     * 用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorTips;
                    bool m_errorTipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATAASSETOPTION_H_
