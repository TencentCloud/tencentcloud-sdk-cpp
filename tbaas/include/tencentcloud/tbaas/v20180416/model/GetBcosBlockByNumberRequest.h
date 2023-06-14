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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSBLOCKBYNUMBERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSBLOCKBYNUMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetBcosBlockByNumber请求参数结构体
                */
                class GetBcosBlockByNumberRequest : public AbstractModel
                {
                public:
                    GetBcosBlockByNumberRequest();
                    ~GetBcosBlockByNumberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID，可在区块链网络详情或列表中获取
                     * @param _clusterId 网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取群组编号，可在群组列表中获取
                     * @return GroupId 群组编号，可在群组列表中获取
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置群组编号，可在群组列表中获取
                     * @param _groupId 群组编号，可在群组列表中获取
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取区块高度，可以从InvokeBcosTrans接口的返回值中解析获取
                     * @return BlockNumber 区块高度，可以从InvokeBcosTrans接口的返回值中解析获取
                     * 
                     */
                    int64_t GetBlockNumber() const;

                    /**
                     * 设置区块高度，可以从InvokeBcosTrans接口的返回值中解析获取
                     * @param _blockNumber 区块高度，可以从InvokeBcosTrans接口的返回值中解析获取
                     * 
                     */
                    void SetBlockNumber(const int64_t& _blockNumber);

                    /**
                     * 判断参数 BlockNumber 是否已赋值
                     * @return BlockNumber 是否已赋值
                     * 
                     */
                    bool BlockNumberHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组编号，可在群组列表中获取
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 区块高度，可以从InvokeBcosTrans接口的返回值中解析获取
                     */
                    int64_t m_blockNumber;
                    bool m_blockNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSBLOCKBYNUMBERREQUEST_H_
