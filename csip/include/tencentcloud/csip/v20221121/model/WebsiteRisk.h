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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBSITERISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBSITERISK_H_

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
                * 网站风险对象
                */
                class WebsiteRisk : public AbstractModel
                {
                public:
                    WebsiteRisk();
                    ~WebsiteRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Status 状态，0未处理、1已处置、2已忽略
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态，0未处理、1已处置、2已忽略
                     * @param _status 状态，0未处理、1已处置、2已忽略
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ID,处理风险使用
                     * @return Id ID,处理风险使用
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID,处理风险使用
                     * @param _id ID,处理风险使用
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
                     * 获取风险链接
                     * @return URL 风险链接
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置风险链接
                     * @param _uRL 风险链接
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取风险文件地址
                     * @return URLPath 风险文件地址
                     * 
                     */
                    std::string GetURLPath() const;

                    /**
                     * 设置风险文件地址
                     * @param _uRLPath 风险文件地址
                     * 
                     */
                    void SetURLPath(const std::string& _uRLPath);

                    /**
                     * 判断参数 URLPath 是否已赋值
                     * @return URLPath 是否已赋值
                     * 
                     */
                    bool URLPathHasBeenSet() const;

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
                     * 获取类型
                     * @return DetectEngine 类型
                     * 
                     */
                    std::string GetDetectEngine() const;

                    /**
                     * 设置类型
                     * @param _detectEngine 类型
                     * 
                     */
                    void SetDetectEngine(const std::string& _detectEngine);

                    /**
                     * 判断参数 DetectEngine 是否已赋值
                     * @return DetectEngine 是否已赋值
                     * 
                     */
                    bool DetectEngineHasBeenSet() const;

                    /**
                     * 获取结果描述
                     * @return ResultDescribe 结果描述
                     * 
                     */
                    std::string GetResultDescribe() const;

                    /**
                     * 设置结果描述
                     * @param _resultDescribe 结果描述
                     * 
                     */
                    void SetResultDescribe(const std::string& _resultDescribe);

                    /**
                     * 判断参数 ResultDescribe 是否已赋值
                     * @return ResultDescribe 是否已赋值
                     * 
                     */
                    bool ResultDescribeHasBeenSet() const;

                    /**
                     * 获取源地址url
                     * @return SourceURL 源地址url
                     * 
                     */
                    std::string GetSourceURL() const;

                    /**
                     * 设置源地址url
                     * @param _sourceURL 源地址url
                     * 
                     */
                    void SetSourceURL(const std::string& _sourceURL);

                    /**
                     * 判断参数 SourceURL 是否已赋值
                     * @return SourceURL 是否已赋值
                     * 
                     */
                    bool SourceURLHasBeenSet() const;

                    /**
                     * 获取源文件地址
                     * @return SourceURLPath 源文件地址
                     * 
                     */
                    std::string GetSourceURLPath() const;

                    /**
                     * 设置源文件地址
                     * @param _sourceURLPath 源文件地址
                     * 
                     */
                    void SetSourceURLPath(const std::string& _sourceURLPath);

                    /**
                     * 判断参数 SourceURLPath 是否已赋值
                     * @return SourceURLPath 是否已赋值
                     * 
                     */
                    bool SourceURLPathHasBeenSet() const;

                private:

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
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ID,处理风险使用
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 前端索引
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

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
                     * 风险链接
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 风险文件地址
                     */
                    std::string m_uRLPath;
                    bool m_uRLPathHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_detectEngine;
                    bool m_detectEngineHasBeenSet;

                    /**
                     * 结果描述
                     */
                    std::string m_resultDescribe;
                    bool m_resultDescribeHasBeenSet;

                    /**
                     * 源地址url
                     */
                    std::string m_sourceURL;
                    bool m_sourceURLHasBeenSet;

                    /**
                     * 源文件地址
                     */
                    std::string m_sourceURLPath;
                    bool m_sourceURLPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBSITERISK_H_
