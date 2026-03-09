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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKAPPLICATIONDETAIL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKAPPLICATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 网络应用任务详情
                */
                class NetworkApplicationDetail : public AbstractModel
                {
                public:
                    NetworkApplicationDetail();
                    ~NetworkApplicationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络应用Id
                     * @return NetworkAppId 网络应用Id
                     * 
                     */
                    std::string GetNetworkAppId() const;

                    /**
                     * 设置网络应用Id
                     * @param _networkAppId 网络应用Id
                     * 
                     */
                    void SetNetworkAppId(const std::string& _networkAppId);

                    /**
                     * 判断参数 NetworkAppId 是否已赋值
                     * @return NetworkAppId 是否已赋值
                     * 
                     */
                    bool NetworkAppIdHasBeenSet() const;

                    /**
                     * 获取网络应用名称
                     * @return Name 网络应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网络应用名称
                     * @param _name 网络应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取地域code
                     * @return Region 地域code
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域code
                     * @param _region 地域code
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取日志主题id
                     * @return TopicId 日志主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id
                     * @param _topicId 日志主题id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志集id
                     * @return LogsetId 日志集id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集id
                     * @param _logsetId 日志集id
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return Token 应用token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置应用token
                     * @param _token 应用token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取主账号id
                     * @return Uin 主账号id
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置主账号id
                     * @param _uin 主账号id
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取子账号id
                     * @return SubUin 子账号id
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置子账号id
                     * @param _subUin 子账号id
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取创建时间，秒级时间戳
                     * @return CreateTime 创建时间，秒级时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，秒级时间戳
                     * @param _createTime 创建时间，秒级时间戳
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
                     * 获取更新时间，秒级时间戳
                     * @return UpdateTime 更新时间，秒级时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，秒级时间戳
                     * @param _updateTime 更新时间，秒级时间戳
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
                     * 网络应用Id
                     */
                    std::string m_networkAppId;
                    bool m_networkAppIdHasBeenSet;

                    /**
                     * 网络应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地域code
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志集id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 主账号id
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号id
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 创建时间，秒级时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，秒级时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKAPPLICATIONDETAIL_H_
