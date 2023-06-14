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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DATAFORWARD_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DATAFORWARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 数据转发描述
                */
                class DataForward : public AbstractModel
                {
                public:
                    DataForward();
                    ~DataForward() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID。
                     * @return ProductId 产品ID。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID。
                     * @param _productId 产品ID。
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
                     * 获取转发地址。
                     * @return ForwardAddr 转发地址。
                     * 
                     */
                    std::string GetForwardAddr() const;

                    /**
                     * 设置转发地址。
                     * @param _forwardAddr 转发地址。
                     * 
                     */
                    void SetForwardAddr(const std::string& _forwardAddr);

                    /**
                     * 判断参数 ForwardAddr 是否已赋值
                     * @return ForwardAddr 是否已赋值
                     * 
                     */
                    bool ForwardAddrHasBeenSet() const;

                    /**
                     * 获取转发状态。
                     * @return Status 转发状态。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置转发状态。
                     * @param _status 转发状态。
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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataChose 1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataChose() const;

                    /**
                     * 设置1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataChose 1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataChose(const int64_t& _dataChose);

                    /**
                     * 判断参数 DataChose 是否已赋值
                     * @return DataChose 是否已赋值
                     * 
                     */
                    bool DataChoseHasBeenSet() const;

                private:

                    /**
                     * 产品ID。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 转发地址。
                     */
                    std::string m_forwardAddr;
                    bool m_forwardAddrHasBeenSet;

                    /**
                     * 转发状态。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 1-数据信息转发 2-设备上下线状态转发 3-数据信息转发&设备上下线状态转发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataChose;
                    bool m_dataChoseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DATAFORWARD_H_
