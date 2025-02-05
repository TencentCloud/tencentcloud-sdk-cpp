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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDATA_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 收件人列表数据类型
                */
                class ReceiverData : public AbstractModel
                {
                public:
                    ReceiverData();
                    ~ReceiverData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收件人列表ID
                     * @return ReceiverId 收件人列表ID
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置收件人列表ID
                     * @param _receiverId 收件人列表ID
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取收件人列表名称
                     * @return ReceiversName 收件人列表名称
                     * 
                     */
                    std::string GetReceiversName() const;

                    /**
                     * 设置收件人列表名称
                     * @param _receiversName 收件人列表名称
                     * 
                     */
                    void SetReceiversName(const std::string& _receiversName);

                    /**
                     * 判断参数 ReceiversName 是否已赋值
                     * @return ReceiversName 是否已赋值
                     * 
                     */
                    bool ReceiversNameHasBeenSet() const;

                    /**
                     * 获取收件人地址总数
                     * @return Count 收件人地址总数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置收件人地址总数
                     * @param _count 收件人地址总数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取收件人列表描述
                     * @return Desc 收件人列表描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置收件人列表描述
                     * @param _desc 收件人列表描述
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
                     * 获取列表状态(1 待上传 2 上传中 3 上传完成)
                     * @return ReceiversStatus 列表状态(1 待上传 2 上传中 3 上传完成)
                     * 
                     */
                    uint64_t GetReceiversStatus() const;

                    /**
                     * 设置列表状态(1 待上传 2 上传中 3 上传完成)
                     * @param _receiversStatus 列表状态(1 待上传 2 上传中 3 上传完成)
                     * 
                     */
                    void SetReceiversStatus(const uint64_t& _receiversStatus);

                    /**
                     * 判断参数 ReceiversStatus 是否已赋值
                     * @return ReceiversStatus 是否已赋值
                     * 
                     */
                    bool ReceiversStatusHasBeenSet() const;

                    /**
                     * 获取创建时间,如:2021-09-28 16:40:35
                     * @return CreateTime 创建时间,如:2021-09-28 16:40:35
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间,如:2021-09-28 16:40:35
                     * @param _createTime 创建时间,如:2021-09-28 16:40:35
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
                     * 获取无效收件人数量
                     * @return InvalidCount 无效收件人数量
                     * 
                     */
                    uint64_t GetInvalidCount() const;

                    /**
                     * 设置无效收件人数量
                     * @param _invalidCount 无效收件人数量
                     * 
                     */
                    void SetInvalidCount(const uint64_t& _invalidCount);

                    /**
                     * 判断参数 InvalidCount 是否已赋值
                     * @return InvalidCount 是否已赋值
                     * 
                     */
                    bool InvalidCountHasBeenSet() const;

                private:

                    /**
                     * 收件人列表ID
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 收件人列表名称
                     */
                    std::string m_receiversName;
                    bool m_receiversNameHasBeenSet;

                    /**
                     * 收件人地址总数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 收件人列表描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 列表状态(1 待上传 2 上传中 3 上传完成)
                     */
                    uint64_t m_receiversStatus;
                    bool m_receiversStatusHasBeenSet;

                    /**
                     * 创建时间,如:2021-09-28 16:40:35
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 无效收件人数量
                     */
                    uint64_t m_invalidCount;
                    bool m_invalidCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_RECEIVERDATA_H_
