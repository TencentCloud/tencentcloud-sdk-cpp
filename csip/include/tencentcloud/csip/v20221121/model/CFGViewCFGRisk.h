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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CFGVIEWCFGRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CFGVIEWCFGRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 配置视角的配置风险对象
                */
                class CFGViewCFGRisk : public AbstractModel
                {
                public:
                    CFGViewCFGRisk();
                    ~CFGViewCFGRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取影响资产
                     * @return NoHandleCount 影响资产
                     * 
                     */
                    int64_t GetNoHandleCount() const;

                    /**
                     * 设置影响资产
                     * @param _noHandleCount 影响资产
                     * 
                     */
                    void SetNoHandleCount(const int64_t& _noHandleCount);

                    /**
                     * 判断参数 NoHandleCount 是否已赋值
                     * @return NoHandleCount 是否已赋值
                     * 
                     */
                    bool NoHandleCountHasBeenSet() const;

                    /**
                     * 获取风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     * @return Level 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     * @param _level 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取最近识别时间
                     * @return RecentTime 最近识别时间
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置最近识别时间
                     * @param _recentTime 最近识别时间
                     * 
                     */
                    void SetRecentTime(const std::string& _recentTime);

                    /**
                     * 判断参数 RecentTime 是否已赋值
                     * @return RecentTime 是否已赋值
                     * 
                     */
                    bool RecentTimeHasBeenSet() const;

                    /**
                     * 获取首次识别时间
                     * @return FirstTime 首次识别时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次识别时间
                     * @param _firstTime 首次识别时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取状态，0未处理、1已处置、2已忽略
                     * @return AffectAssetCount 状态，0未处理、1已处置、2已忽略
                     * 
                     */
                    uint64_t GetAffectAssetCount() const;

                    /**
                     * 设置状态，0未处理、1已处置、2已忽略
                     * @param _affectAssetCount 状态，0未处理、1已处置、2已忽略
                     * 
                     */
                    void SetAffectAssetCount(const uint64_t& _affectAssetCount);

                    /**
                     * 判断参数 AffectAssetCount 是否已赋值
                     * @return AffectAssetCount 是否已赋值
                     * 
                     */
                    bool AffectAssetCountHasBeenSet() const;

                    /**
                     * 获取资产唯一id
                     * @return Id 资产唯一id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资产唯一id
                     * @param _id 资产唯一id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资产子类型
                     * @return From 资产子类型
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置资产子类型
                     * @param _from 资产子类型
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取前端索引
                     * @return Index 前端索引
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置前端索引
                     * @param _index 前端索引
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nick 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nick 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFGName 配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCFGName() const;

                    /**
                     * 设置配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFGName 配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFGName(const std::string& _cFGName);

                    /**
                     * 判断参数 CFGName 是否已赋值
                     * @return CFGName 是否已赋值
                     * 
                     */
                    bool CFGNameHasBeenSet() const;

                    /**
                     * 获取检查类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckType 检查类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置检查类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkType 检查类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取-
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFGSTD -
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCFGSTD() const;

                    /**
                     * 设置-
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFGSTD -
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFGSTD(const std::string& _cFGSTD);

                    /**
                     * 判断参数 CFGSTD 是否已赋值
                     * @return CFGSTD 是否已赋值
                     * 
                     */
                    bool CFGSTDHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFGDescribe 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCFGDescribe() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFGDescribe 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFGDescribe(const std::string& _cFGDescribe);

                    /**
                     * 判断参数 CFGDescribe 是否已赋值
                     * @return CFGDescribe 是否已赋值
                     * 
                     */
                    bool CFGDescribeHasBeenSet() const;

                    /**
                     * 获取修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFGFix 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCFGFix() const;

                    /**
                     * 设置修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFGFix 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFGFix(const std::string& _cFGFix);

                    /**
                     * 判断参数 CFGFix 是否已赋值
                     * @return CFGFix 是否已赋值
                     * 
                     */
                    bool CFGFixHasBeenSet() const;

                    /**
                     * 获取帮助文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFGHelpURL 帮助文档
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCFGHelpURL() const;

                    /**
                     * 设置帮助文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFGHelpURL 帮助文档
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFGHelpURL(const std::string& _cFGHelpURL);

                    /**
                     * 判断参数 CFGHelpURL 是否已赋值
                     * @return CFGHelpURL 是否已赋值
                     * 
                     */
                    bool CFGHelpURLHasBeenSet() const;

                private:

                    /**
                     * 影响资产
                     */
                    int64_t m_noHandleCount;
                    bool m_noHandleCountHasBeenSet;

                    /**
                     * 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 最近识别时间
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * 首次识别时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 状态，0未处理、1已处置、2已忽略
                     */
                    uint64_t m_affectAssetCount;
                    bool m_affectAssetCountHasBeenSet;

                    /**
                     * 资产唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资产子类型
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 前端索引
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 配置名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cFGName;
                    bool m_cFGNameHasBeenSet;

                    /**
                     * 检查类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cFGSTD;
                    bool m_cFGSTDHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cFGDescribe;
                    bool m_cFGDescribeHasBeenSet;

                    /**
                     * 修复建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cFGFix;
                    bool m_cFGFixHasBeenSet;

                    /**
                     * 帮助文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cFGHelpURL;
                    bool m_cFGHelpURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CFGVIEWCFGRISK_H_
