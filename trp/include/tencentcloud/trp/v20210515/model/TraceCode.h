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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_TRACECODE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_TRACECODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/PackSpec.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 溯源码
                */
                class TraceCode : public AbstractModel
                {
                public:
                    TraceCode();
                    ~TraceCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取二维码
                     * @return Code 二维码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置二维码
                     * @param _code 二维码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取码包ID
                     * @return PackId 码包ID
                     * 
                     */
                    std::string GetPackId() const;

                    /**
                     * 设置码包ID
                     * @param _packId 码包ID
                     * 
                     */
                    void SetPackId(const std::string& _packId);

                    /**
                     * 判断参数 PackId 是否已赋值
                     * @return PackId 是否已赋值
                     * 
                     */
                    bool PackIdHasBeenSet() const;

                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取所属商户ID
                     * @return MerchantId 所属商户ID
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置所属商户ID
                     * @param _merchantId 所属商户ID
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取码状态 0: 冻结 1: 激活
                     * @return Status 码状态 0: 冻结 1: 激活
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置码状态 0: 冻结 1: 激活
                     * @param _status 码状态 0: 冻结 1: 激活
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
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
                     * 获取商户名称
                     * @return MerchantName 商户名称
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名称
                     * @param _merchantName 商户名称
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取渠道商ID
                     * @return AgentId 渠道商ID
                     * 
                     */
                    uint64_t GetAgentId() const;

                    /**
                     * 设置渠道商ID
                     * @param _agentId 渠道商ID
                     * 
                     */
                    void SetAgentId(const uint64_t& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取码层级 0: 最小级, 1: 一级, 2: 二级
                     * @return Level 码层级 0: 最小级, 1: 一级, 2: 二级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置码层级 0: 最小级, 1: 一级, 2: 二级
                     * @param _level 码层级 0: 最小级, 1: 一级, 2: 二级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取码层级详情
                     * @return PackSpec 码层级详情
                     * 
                     */
                    std::vector<PackSpec> GetPackSpec() const;

                    /**
                     * 设置码层级详情
                     * @param _packSpec 码层级详情
                     * 
                     */
                    void SetPackSpec(const std::vector<PackSpec>& _packSpec);

                    /**
                     * 判断参数 PackSpec 是否已赋值
                     * @return PackSpec 是否已赋值
                     * 
                     */
                    bool PackSpecHasBeenSet() const;

                    /**
                     * 获取场景码
                     * @return SceneCode 场景码
                     * 
                     */
                    uint64_t GetSceneCode() const;

                    /**
                     * 设置场景码
                     * @param _sceneCode 场景码
                     * 
                     */
                    void SetSceneCode(const uint64_t& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取流水码
                     * @return SerialCode 流水码
                     * 
                     */
                    uint64_t GetSerialCode() const;

                    /**
                     * 设置流水码
                     * @param _serialCode 流水码
                     * 
                     */
                    void SetSerialCode(const uint64_t& _serialCode);

                    /**
                     * 判断参数 SerialCode 是否已赋值
                     * @return SerialCode 是否已赋值
                     * 
                     */
                    bool SerialCodeHasBeenSet() const;

                private:

                    /**
                     * 二维码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 码包ID
                     */
                    std::string m_packId;
                    bool m_packIdHasBeenSet;

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 所属商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 码状态 0: 冻结 1: 激活
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 商户名称
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 渠道商ID
                     */
                    uint64_t m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 码层级 0: 最小级, 1: 一级, 2: 二级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 码层级详情
                     */
                    std::vector<PackSpec> m_packSpec;
                    bool m_packSpecHasBeenSet;

                    /**
                     * 场景码
                     */
                    uint64_t m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 流水码
                     */
                    uint64_t m_serialCode;
                    bool m_serialCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_TRACECODE_H_
