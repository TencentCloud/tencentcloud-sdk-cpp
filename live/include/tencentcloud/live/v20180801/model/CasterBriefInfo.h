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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERBRIEFINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 导播台简略信息
                */
                class CasterBriefInfo : public AbstractModel
                {
                public:
                    CasterBriefInfo();
                    ~CasterBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导播台ID
                     * @return CasterId 导播台ID
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置导播台ID
                     * @param _casterId 导播台ID
                     * 
                     */
                    void SetCasterId(const uint64_t& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                    /**
                     * 获取导播台名称
                     * @return CasterName 导播台名称
                     * 
                     */
                    std::string GetCasterName() const;

                    /**
                     * 设置导播台名称
                     * @param _casterName 导播台名称
                     * 
                     */
                    void SetCasterName(const std::string& _casterName);

                    /**
                     * 判断参数 CasterName 是否已赋值
                     * @return CasterName 是否已赋值
                     * 
                     */
                    bool CasterNameHasBeenSet() const;

                    /**
                     * 获取导播台的描述
                     * @return Description 导播台的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置导播台的描述
                     * @param _description 导播台的描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取开始计费时间，值为unix时间戳
                     * @return StartBillingTime 开始计费时间，值为unix时间戳
                     * 
                     */
                    uint64_t GetStartBillingTime() const;

                    /**
                     * 设置开始计费时间，值为unix时间戳
                     * @param _startBillingTime 开始计费时间，值为unix时间戳
                     * 
                     */
                    void SetStartBillingTime(const uint64_t& _startBillingTime);

                    /**
                     * 判断参数 StartBillingTime 是否已赋值
                     * @return StartBillingTime 是否已赋值
                     * 
                     */
                    bool StartBillingTimeHasBeenSet() const;

                    /**
                     * 获取结束计费时间，值为unix时间戳
                     * @return StopBillingTime 结束计费时间，值为unix时间戳
                     * 
                     */
                    uint64_t GetStopBillingTime() const;

                    /**
                     * 设置结束计费时间，值为unix时间戳
                     * @param _stopBillingTime 结束计费时间，值为unix时间戳
                     * 
                     */
                    void SetStopBillingTime(const uint64_t& _stopBillingTime);

                    /**
                     * 判断参数 StopBillingTime 是否已赋值
                     * @return StopBillingTime 是否已赋值
                     * 
                     */
                    bool StopBillingTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，值为unix时间戳
                     * @return CreateTime 创建时间，值为unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，值为unix时间戳
                     * @param _createTime 创建时间，值为unix时间戳
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
                     * 获取导播台状态
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     * @return Status 导播台状态
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置导播台状态
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     * @param _status 导播台状态
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
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
                     * 获取导播台的过期时间，值为-1或unix时间戳。
当值为-1时，代表永不过期。
当值为特定unix时间戳时，代表过期时间为对应的时间，导播台在该时间自动停止。
                     * @return ExpireTime 导播台的过期时间，值为-1或unix时间戳。
当值为-1时，代表永不过期。
当值为特定unix时间戳时，代表过期时间为对应的时间，导播台在该时间自动停止。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置导播台的过期时间，值为-1或unix时间戳。
当值为-1时，代表永不过期。
当值为特定unix时间戳时，代表过期时间为对应的时间，导播台在该时间自动停止。
                     * @param _expireTime 导播台的过期时间，值为-1或unix时间戳。
当值为-1时，代表永不过期。
当值为特定unix时间戳时，代表过期时间为对应的时间，导播台在该时间自动停止。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取计费字段，该字段暂无作用
                     * @return FeeType 计费字段，该字段暂无作用
                     * 
                     */
                    int64_t GetFeeType() const;

                    /**
                     * 设置计费字段，该字段暂无作用
                     * @param _feeType 计费字段，该字段暂无作用
                     * 
                     */
                    void SetFeeType(const int64_t& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                private:

                    /**
                     * 导播台ID
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 导播台名称
                     */
                    std::string m_casterName;
                    bool m_casterNameHasBeenSet;

                    /**
                     * 导播台的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 开始计费时间，值为unix时间戳
                     */
                    uint64_t m_startBillingTime;
                    bool m_startBillingTimeHasBeenSet;

                    /**
                     * 结束计费时间，值为unix时间戳
                     */
                    uint64_t m_stopBillingTime;
                    bool m_stopBillingTimeHasBeenSet;

                    /**
                     * 创建时间，值为unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 导播台状态
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 导播台的过期时间，值为-1或unix时间戳。
当值为-1时，代表永不过期。
当值为特定unix时间戳时，代表过期时间为对应的时间，导播台在该时间自动停止。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 计费字段，该字段暂无作用
                     */
                    int64_t m_feeType;
                    bool m_feeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERBRIEFINFO_H_
