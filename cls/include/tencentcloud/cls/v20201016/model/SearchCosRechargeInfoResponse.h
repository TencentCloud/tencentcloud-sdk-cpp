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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFORESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * SearchCosRechargeInfo返回参数结构体
                */
                class SearchCosRechargeInfoResponse : public AbstractModel
                {
                public:
                    SearchCosRechargeInfoResponse();
                    ~SearchCosRechargeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配到的存储桶下的某个文件的前几行数据
                     * @return Data 匹配到的存储桶下的某个文件的前几行数据
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取匹配到的存储桶下的文件个数
                     * @return Sum 匹配到的存储桶下的文件个数
                     * 
                     */
                    uint64_t GetSum() const;

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     * 
                     */
                    bool SumHasBeenSet() const;

                    /**
                     * 获取当前预览文件路径
                     * @return Path 当前预览文件路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取预览获取数据失败原因
                     * @return Msg 预览获取数据失败原因
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 匹配到的存储桶下的某个文件的前几行数据
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 匹配到的存储桶下的文件个数
                     */
                    uint64_t m_sum;
                    bool m_sumHasBeenSet;

                    /**
                     * 当前预览文件路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 预览获取数据失败原因
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFORESPONSE_H_
