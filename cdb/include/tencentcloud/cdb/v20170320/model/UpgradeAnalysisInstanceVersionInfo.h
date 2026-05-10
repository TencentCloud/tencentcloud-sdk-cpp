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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 分析引擎实例版本升级信息
                */
                class UpgradeAnalysisInstanceVersionInfo : public AbstractModel
                {
                public:
                    UpgradeAnalysisInstanceVersionInfo();
                    ~UpgradeAnalysisInstanceVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本升级灰度ip</p>
                     * @return Vip <p>版本升级灰度ip</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>版本升级灰度ip</p>
                     * @param _vip <p>版本升级灰度ip</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>版本升级灰度port</p>
                     * @return Vport <p>版本升级灰度port</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>版本升级灰度port</p>
                     * @param _vport <p>版本升级灰度port</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>升级之后版本</p>
                     * @return EngineVersion <p>升级之后版本</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>升级之后版本</p>
                     * @param _engineVersion <p>升级之后版本</p>
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例升级灰度事件</p><p>单位：天</p>
                     * @return ExpireTime <p>实例升级灰度事件</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>实例升级灰度事件</p><p>单位：天</p>
                     * @param _expireTime <p>实例升级灰度事件</p><p>单位：天</p>
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>版本升级灰度ip</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>版本升级灰度port</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>升级之后版本</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>实例升级灰度事件</p><p>单位：天</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_
