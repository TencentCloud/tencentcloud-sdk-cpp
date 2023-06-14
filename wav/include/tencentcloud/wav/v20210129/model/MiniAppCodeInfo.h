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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_MINIAPPCODEINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_MINIAPPCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 小程序码信息
                */
                class MiniAppCodeInfo : public AbstractModel
                {
                public:
                    MiniAppCodeInfo();
                    ~MiniAppCodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键id
                     * @return Id 主键id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置主键id
                     * @param _id 主键id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取小程序名称
                     * @return MiniAppName 小程序名称
                     * 
                     */
                    std::string GetMiniAppName() const;

                    /**
                     * 设置小程序名称
                     * @param _miniAppName 小程序名称
                     * 
                     */
                    void SetMiniAppName(const std::string& _miniAppName);

                    /**
                     * 判断参数 MiniAppName 是否已赋值
                     * @return MiniAppName 是否已赋值
                     * 
                     */
                    bool MiniAppNameHasBeenSet() const;

                    /**
                     * 获取小程序logo
                     * @return MiniAppLogo 小程序logo
                     * 
                     */
                    std::string GetMiniAppLogo() const;

                    /**
                     * 设置小程序logo
                     * @param _miniAppLogo 小程序logo
                     * 
                     */
                    void SetMiniAppLogo(const std::string& _miniAppLogo);

                    /**
                     * 判断参数 MiniAppLogo 是否已赋值
                     * @return MiniAppLogo 是否已赋值
                     * 
                     */
                    bool MiniAppLogoHasBeenSet() const;

                    /**
                     * 获取小程序管理端地址
                     * @return MiniAdminUrl 小程序管理端地址
                     * 
                     */
                    std::string GetMiniAdminUrl() const;

                    /**
                     * 设置小程序管理端地址
                     * @param _miniAdminUrl 小程序管理端地址
                     * 
                     */
                    void SetMiniAdminUrl(const std::string& _miniAdminUrl);

                    /**
                     * 判断参数 MiniAdminUrl 是否已赋值
                     * @return MiniAdminUrl 是否已赋值
                     * 
                     */
                    bool MiniAdminUrlHasBeenSet() const;

                    /**
                     * 获取状态：0正常，1删除
                     * @return State 状态：0正常，1删除
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置状态：0正常，1删除
                     * @param _state 状态：0正常，1删除
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间戳，单位为秒
                     * @return CreateTime 创建时间戳，单位为秒
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间戳，单位为秒
                     * @param _createTime 创建时间戳，单位为秒
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间戳，单位为秒
                     * @return UpdateTime 更新时间戳，单位为秒
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳，单位为秒
                     * @param _updateTime 更新时间戳，单位为秒
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 主键id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 小程序名称
                     */
                    std::string m_miniAppName;
                    bool m_miniAppNameHasBeenSet;

                    /**
                     * 小程序logo
                     */
                    std::string m_miniAppLogo;
                    bool m_miniAppLogoHasBeenSet;

                    /**
                     * 小程序管理端地址
                     */
                    std::string m_miniAdminUrl;
                    bool m_miniAdminUrlHasBeenSet;

                    /**
                     * 状态：0正常，1删除
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间戳，单位为秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间戳，单位为秒
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_MINIAPPCODEINFO_H_
