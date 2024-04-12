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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEITEM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 发布列表详情
                */
                class ListReleaseItem : public AbstractModel
                {
                public:
                    ListReleaseItem();
                    ~ListReleaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本ID
                     * @return ReleaseBizId 版本ID
                     * 
                     */
                    std::string GetReleaseBizId() const;

                    /**
                     * 设置版本ID
                     * @param _releaseBizId 版本ID
                     * 
                     */
                    void SetReleaseBizId(const std::string& _releaseBizId);

                    /**
                     * 判断参数 ReleaseBizId 是否已赋值
                     * @return ReleaseBizId 是否已赋值
                     * 
                     */
                    bool ReleaseBizIdHasBeenSet() const;

                    /**
                     * 获取发布人
                     * @return Operator 发布人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置发布人
                     * @param _operator 发布人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取发布描述
                     * @return Desc 发布描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置发布描述
                     * @param _desc 发布描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取发布状态
                     * @return Status 发布状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置发布状态
                     * @param _status 发布状态
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
                     * 获取发布状态描述
                     * @return StatusDesc 发布状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置发布状态描述
                     * @param _statusDesc 发布状态描述
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return Reason 失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因
                     * @param _reason 失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取发布成功数
                     * @return SuccessCount 发布成功数
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置发布成功数
                     * @param _successCount 发布成功数
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取发布失败数
                     * @return FailCount 发布失败数
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置发布失败数
                     * @param _failCount 发布失败数
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                private:

                    /**
                     * 版本ID
                     */
                    std::string m_releaseBizId;
                    bool m_releaseBizIdHasBeenSet;

                    /**
                     * 发布人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 发布描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 发布状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发布状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 发布成功数
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 发布失败数
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEITEM_H_
