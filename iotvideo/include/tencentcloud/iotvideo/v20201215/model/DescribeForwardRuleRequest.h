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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEFORWARDRULEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEFORWARDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeForwardRule请求参数结构体
                */
                class DescribeForwardRuleRequest : public AbstractModel
                {
                public:
                    DescribeForwardRuleRequest();
                    ~DescribeForwardRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取控制台Skey
                     * @return Skey 控制台Skey
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置控制台Skey
                     * @param _skey 控制台Skey
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取队列类型，0：CMQ，1：Ckafka
                     * @return QueueType 队列类型，0：CMQ，1：Ckafka
                     * 
                     */
                    uint64_t GetQueueType() const;

                    /**
                     * 设置队列类型，0：CMQ，1：Ckafka
                     * @param _queueType 队列类型，0：CMQ，1：Ckafka
                     * 
                     */
                    void SetQueueType(const uint64_t& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取临时密钥
                     * @return Consecretid 临时密钥
                     * 
                     */
                    std::string GetConsecretid() const;

                    /**
                     * 设置临时密钥
                     * @param _consecretid 临时密钥
                     * 
                     */
                    void SetConsecretid(const std::string& _consecretid);

                    /**
                     * 判断参数 Consecretid 是否已赋值
                     * @return Consecretid 是否已赋值
                     * 
                     */
                    bool ConsecretidHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 控制台Skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * 队列类型，0：CMQ，1：Ckafka
                     */
                    uint64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 临时密钥
                     */
                    std::string m_consecretid;
                    bool m_consecretidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEFORWARDRULEREQUEST_H_
