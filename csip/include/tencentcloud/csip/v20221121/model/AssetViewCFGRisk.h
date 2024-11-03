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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWCFGRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWCFGRISK_H_

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
                * 资产视角配置风险
                */
                class AssetViewCFGRisk : public AbstractModel
                {
                public:
                    AssetViewCFGRisk();
                    ~AssetViewCFGRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一id
                     * @return Id 唯一id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置唯一id
                     * @param _id 唯一id
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
                     * 获取配置名
                     * @return CFGName 配置名
                     * 
                     */
                    std::string GetCFGName() const;

                    /**
                     * 设置配置名
                     * @param _cFGName 配置名
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
                     * @return CheckType 检查类型
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置检查类型
                     * @param _checkType 检查类型
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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取影响资产
                     * @return AffectAsset 影响资产
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置影响资产
                     * @param _affectAsset 影响资产
                     * 
                     */
                    void SetAffectAsset(const std::string& _affectAsset);

                    /**
                     * 判断参数 AffectAsset 是否已赋值
                     * @return AffectAsset 是否已赋值
                     * 
                     */
                    bool AffectAssetHasBeenSet() const;

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
                     * 获取来源
                     * @return From 来源
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置来源
                     * @param _from 来源
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取相关规范
                     * @return CFGSTD 相关规范
                     * 
                     */
                    std::string GetCFGSTD() const;

                    /**
                     * 设置相关规范
                     * @param _cFGSTD 相关规范
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
                     * 获取配置详情
                     * @return CFGDescribe 配置详情
                     * 
                     */
                    std::string GetCFGDescribe() const;

                    /**
                     * 设置配置详情
                     * @param _cFGDescribe 配置详情
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
                     * @return CFGFix 修复建议
                     * 
                     */
                    std::string GetCFGFix() const;

                    /**
                     * 设置修复建议
                     * @param _cFGFix 修复建议
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
                     * 获取帮助文档链接
                     * @return CFGHelpURL 帮助文档链接
                     * 
                     */
                    std::string GetCFGHelpURL() const;

                    /**
                     * 设置帮助文档链接
                     * @param _cFGHelpURL 帮助文档链接
                     * 
                     */
                    void SetCFGHelpURL(const std::string& _cFGHelpURL);

                    /**
                     * 判断参数 CFGHelpURL 是否已赋值
                     * @return CFGHelpURL 是否已赋值
                     * 
                     */
                    bool CFGHelpURLHasBeenSet() const;

                    /**
                     * 获取前端使用索引
                     * @return Index 前端使用索引
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置前端使用索引
                     * @param _index 前端使用索引
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
                     * @return Nick 用户昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置用户昵称
                     * @param _nick 用户昵称
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
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
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
                     * 获取当资产类型为LBL的时候，展示该字段，方便定位具体的LB
                     * @return ClbId 当资产类型为LBL的时候，展示该字段，方便定位具体的LB
                     * 
                     */
                    std::string GetClbId() const;

                    /**
                     * 设置当资产类型为LBL的时候，展示该字段，方便定位具体的LB
                     * @param _clbId 当资产类型为LBL的时候，展示该字段，方便定位具体的LB
                     * 
                     */
                    void SetClbId(const std::string& _clbId);

                    /**
                     * 判断参数 ClbId 是否已赋值
                     * @return ClbId 是否已赋值
                     * 
                     */
                    bool ClbIdHasBeenSet() const;

                private:

                    /**
                     * 唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置名
                     */
                    std::string m_cFGName;
                    bool m_cFGNameHasBeenSet;

                    /**
                     * 检查类型
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 影响资产
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 首次识别时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最近识别时间
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * 来源
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 相关规范
                     */
                    std::string m_cFGSTD;
                    bool m_cFGSTDHasBeenSet;

                    /**
                     * 配置详情
                     */
                    std::string m_cFGDescribe;
                    bool m_cFGDescribeHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_cFGFix;
                    bool m_cFGFixHasBeenSet;

                    /**
                     * 帮助文档链接
                     */
                    std::string m_cFGHelpURL;
                    bool m_cFGHelpURLHasBeenSet;

                    /**
                     * 前端使用索引
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
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 当资产类型为LBL的时候，展示该字段，方便定位具体的LB
                     */
                    std::string m_clbId;
                    bool m_clbIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWCFGRISK_H_
