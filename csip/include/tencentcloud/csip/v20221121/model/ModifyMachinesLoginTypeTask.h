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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPETASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ModifyLoginTypeFailInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 批量修改主机登录方式任务
                */
                class ModifyMachinesLoginTypeTask : public AbstractModel
                {
                public:
                    ModifyMachinesLoginTypeTask();
                    ~ModifyMachinesLoginTypeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return Id <p>任务ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _id <p>任务ID</p>
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
                     * 获取<p>1-进行中，2已完成</p>
                     * @return Status <p>1-进行中，2已完成</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>1-进行中，2已完成</p>
                     * @param _status <p>1-进行中，2已完成</p>
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
                     * 获取<p>执行成功数量</p>
                     * @return SuccessCount <p>执行成功数量</p>
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置<p>执行成功数量</p>
                     * @param _successCount <p>执行成功数量</p>
                     * 
                     */
                    void SetSuccessCount(const uint64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>执行失败主机列表</p>
                     * @return FailList <p>执行失败主机列表</p>
                     * 
                     */
                    std::vector<ModifyLoginTypeFailInfo> GetFailList() const;

                    /**
                     * 设置<p>执行失败主机列表</p>
                     * @param _failList <p>执行失败主机列表</p>
                     * 
                     */
                    void SetFailList(const std::vector<ModifyLoginTypeFailInfo>& _failList);

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                    /**
                     * 获取<p>修改成功的实例ID列表</p>
                     * @return SuccessInstances <p>修改成功的实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetSuccessInstances() const;

                    /**
                     * 设置<p>修改成功的实例ID列表</p>
                     * @param _successInstances <p>修改成功的实例ID列表</p>
                     * 
                     */
                    void SetSuccessInstances(const std::vector<std::string>& _successInstances);

                    /**
                     * 判断参数 SuccessInstances 是否已赋值
                     * @return SuccessInstances 是否已赋值
                     * 
                     */
                    bool SuccessInstancesHasBeenSet() const;

                    /**
                     * 获取<p>修改中的实例ID列表</p>
                     * @return ProgressingInstances <p>修改中的实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetProgressingInstances() const;

                    /**
                     * 设置<p>修改中的实例ID列表</p>
                     * @param _progressingInstances <p>修改中的实例ID列表</p>
                     * 
                     */
                    void SetProgressingInstances(const std::vector<std::string>& _progressingInstances);

                    /**
                     * 判断参数 ProgressingInstances 是否已赋值
                     * @return ProgressingInstances 是否已赋值
                     * 
                     */
                    bool ProgressingInstancesHasBeenSet() const;

                    /**
                     * 获取<p>失败主机数</p>
                     * @return FailedHostCount <p>失败主机数</p>
                     * 
                     */
                    uint64_t GetFailedHostCount() const;

                    /**
                     * 设置<p>失败主机数</p>
                     * @param _failedHostCount <p>失败主机数</p>
                     * 
                     */
                    void SetFailedHostCount(const uint64_t& _failedHostCount);

                    /**
                     * 判断参数 FailedHostCount 是否已赋值
                     * @return FailedHostCount 是否已赋值
                     * 
                     */
                    bool FailedHostCountHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>1-进行中，2已完成</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>执行成功数量</p>
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * <p>执行失败主机列表</p>
                     */
                    std::vector<ModifyLoginTypeFailInfo> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * <p>修改成功的实例ID列表</p>
                     */
                    std::vector<std::string> m_successInstances;
                    bool m_successInstancesHasBeenSet;

                    /**
                     * <p>修改中的实例ID列表</p>
                     */
                    std::vector<std::string> m_progressingInstances;
                    bool m_progressingInstancesHasBeenSet;

                    /**
                     * <p>失败主机数</p>
                     */
                    uint64_t m_failedHostCount;
                    bool m_failedHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPETASK_H_
