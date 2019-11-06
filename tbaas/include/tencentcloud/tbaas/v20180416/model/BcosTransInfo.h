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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_BCOSTRANSINFO_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_BCOSTRANSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * bcos交易信息对象
                */
                class BcosTransInfo : public AbstractModel
                {
                public:
                    BcosTransInfo();
                    ~BcosTransInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属区块高度
                     * @return BlockNumber 所属区块高度
                     */
                    int64_t GetBlockNumber() const;

                    /**
                     * 设置所属区块高度
                     * @param BlockNumber 所属区块高度
                     */
                    void SetBlockNumber(const int64_t& _blockNumber);

                    /**
                     * 判断参数 BlockNumber 是否已赋值
                     * @return BlockNumber 是否已赋值
                     */
                    bool BlockNumberHasBeenSet() const;

                    /**
                     * 获取区块时间戳
                     * @return BlockTimestamp 区块时间戳
                     */
                    std::string GetBlockTimestamp() const;

                    /**
                     * 设置区块时间戳
                     * @param BlockTimestamp 区块时间戳
                     */
                    void SetBlockTimestamp(const std::string& _blockTimestamp);

                    /**
                     * 判断参数 BlockTimestamp 是否已赋值
                     * @return BlockTimestamp 是否已赋值
                     */
                    bool BlockTimestampHasBeenSet() const;

                    /**
                     * 获取交易哈希
                     * @return TransHash 交易哈希
                     */
                    std::string GetTransHash() const;

                    /**
                     * 设置交易哈希
                     * @param TransHash 交易哈希
                     */
                    void SetTransHash(const std::string& _transHash);

                    /**
                     * 判断参数 TransHash 是否已赋值
                     * @return TransHash 是否已赋值
                     */
                    bool TransHashHasBeenSet() const;

                    /**
                     * 获取交易发起者
                     * @return TransFrom 交易发起者
                     */
                    std::string GetTransFrom() const;

                    /**
                     * 设置交易发起者
                     * @param TransFrom 交易发起者
                     */
                    void SetTransFrom(const std::string& _transFrom);

                    /**
                     * 判断参数 TransFrom 是否已赋值
                     * @return TransFrom 是否已赋值
                     */
                    bool TransFromHasBeenSet() const;

                    /**
                     * 获取交易接收者
                     * @return TransTo 交易接收者
                     */
                    std::string GetTransTo() const;

                    /**
                     * 设置交易接收者
                     * @param TransTo 交易接收者
                     */
                    void SetTransTo(const std::string& _transTo);

                    /**
                     * 判断参数 TransTo 是否已赋值
                     * @return TransTo 是否已赋值
                     */
                    bool TransToHasBeenSet() const;

                    /**
                     * 获取落库时间
                     * @return CreateTime 落库时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置落库时间
                     * @param CreateTime 落库时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param ModifyTime 修改时间
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 所属区块高度
                     */
                    int64_t m_blockNumber;
                    bool m_blockNumberHasBeenSet;

                    /**
                     * 区块时间戳
                     */
                    std::string m_blockTimestamp;
                    bool m_blockTimestampHasBeenSet;

                    /**
                     * 交易哈希
                     */
                    std::string m_transHash;
                    bool m_transHashHasBeenSet;

                    /**
                     * 交易发起者
                     */
                    std::string m_transFrom;
                    bool m_transFromHasBeenSet;

                    /**
                     * 交易接收者
                     */
                    std::string m_transTo;
                    bool m_transToHasBeenSet;

                    /**
                     * 落库时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_BCOSTRANSINFO_H_
