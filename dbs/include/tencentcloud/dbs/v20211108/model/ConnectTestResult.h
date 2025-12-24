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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_CONNECTTESTRESULT_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_CONNECTTESTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/TestItem.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 连通性检测结果
                */
                class ConnectTestResult : public AbstractModel
                {
                public:
                    ConnectTestResult();
                    ~ConnectTestResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _taskId <p>任务 ID</p>
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _status <p>任务状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否通过。0 表示未通过，1 表示通过。</p>
                     * @return IsPass <p>是否通过。0 表示未通过，1 表示通过。</p>
                     * 
                     */
                    int64_t GetIsPass() const;

                    /**
                     * 设置<p>是否通过。0 表示未通过，1 表示通过。</p>
                     * @param _isPass <p>是否通过。0 表示未通过，1 表示通过。</p>
                     * 
                     */
                    void SetIsPass(const int64_t& _isPass);

                    /**
                     * 判断参数 IsPass 是否已赋值
                     * @return IsPass 是否已赋值
                     * 
                     */
                    bool IsPassHasBeenSet() const;

                    /**
                     * 获取<p>源端地址</p>
                     * @return Addr <p>源端地址</p>
                     * 
                     */
                    std::string GetAddr() const;

                    /**
                     * 设置<p>源端地址</p>
                     * @param _addr <p>源端地址</p>
                     * 
                     */
                    void SetAddr(const std::string& _addr);

                    /**
                     * 判断参数 Addr 是否已赋值
                     * @return Addr 是否已赋值
                     * 
                     */
                    bool AddrHasBeenSet() const;

                    /**
                     * 获取<p>源地址转换IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SNatIp <p>源地址转换IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSNatIp() const;

                    /**
                     * 设置<p>源地址转换IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sNatIp <p>源地址转换IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSNatIp(const std::string& _sNatIp);

                    /**
                     * 判断参数 SNatIp 是否已赋值
                     * @return SNatIp 是否已赋值
                     * 
                     */
                    bool SNatIpHasBeenSet() const;

                    /**
                     * 获取<p>检测结果集</p>
                     * @return TestItems <p>检测结果集</p>
                     * 
                     */
                    std::vector<TestItem> GetTestItems() const;

                    /**
                     * 设置<p>检测结果集</p>
                     * @param _testItems <p>检测结果集</p>
                     * 
                     */
                    void SetTestItems(const std::vector<TestItem>& _testItems);

                    /**
                     * 判断参数 TestItems 是否已赋值
                     * @return TestItems 是否已赋值
                     * 
                     */
                    bool TestItemsHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否通过。0 表示未通过，1 表示通过。</p>
                     */
                    int64_t m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * <p>源端地址</p>
                     */
                    std::string m_addr;
                    bool m_addrHasBeenSet;

                    /**
                     * <p>源地址转换IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sNatIp;
                    bool m_sNatIpHasBeenSet;

                    /**
                     * <p>检测结果集</p>
                     */
                    std::vector<TestItem> m_testItems;
                    bool m_testItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_CONNECTTESTRESULT_H_
