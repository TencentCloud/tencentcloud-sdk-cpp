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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ORDERDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ORDERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 订单详情
                */
                class OrderDetail : public AbstractModel
                {
                public:
                    OrderDetail();
                    ~OrderDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源ID</p>
                     * @return ResourceID <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceID <p>资源ID</p>
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取<p>计费项</p>
                     * @return InquireKey <p>计费项</p>
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置<p>计费项</p>
                     * @param _inquireKey <p>计费项</p>
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取<p>订单状态</p><ul><li>1 正常</li><li>2 隔离期</li><li>3 已销毁</li></ul>
                     * @return Status <p>订单状态</p><ul><li>1 正常</li><li>2 隔离期</li><li>3 已销毁</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>订单状态</p><ul><li>1 正常</li><li>2 隔离期</li><li>3 已销毁</li></ul>
                     * @param _status <p>订单状态</p><ul><li>1 正常</li><li>2 隔离期</li><li>3 已销毁</li></ul>
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
                     * 获取<p>源类型</p>
                     * @return SourceType <p>源类型</p>
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置<p>源类型</p>
                     * @param _sourceType <p>源类型</p>
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * <p>计费项</p>
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * <p>订单状态</p><ul><li>1 正常</li><li>2 隔离期</li><li>3 已销毁</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>源类型</p>
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ORDERDETAIL_H_
