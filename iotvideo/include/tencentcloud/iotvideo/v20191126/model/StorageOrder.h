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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_STORAGEORDER_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_STORAGEORDER_H_

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
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 云存订单信息
                */
                class StorageOrder : public AbstractModel
                {
                public:
                    StorageOrder();
                    ~StorageOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定单唯一性ID
                     * @return OrderId 定单唯一性ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置定单唯一性ID
                     * @param _orderId 定单唯一性ID
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取云存套餐ID
                     * @return PkgId 云存套餐ID
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置云存套餐ID
                     * @param _pkgId 云存套餐ID
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取定单服务状态
1;订单正在使用。
2:订单未开始。
3:订单已经使用过，现在暂时未开始使用(该订单从其他服务转移而来)。
4:订单已过期。
5:订单已被退订。
6:定单已被转移到其他云存服务。
                     * @return Status 定单服务状态
1;订单正在使用。
2:订单未开始。
3:订单已经使用过，现在暂时未开始使用(该订单从其他服务转移而来)。
4:订单已过期。
5:订单已被退订。
6:定单已被转移到其他云存服务。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置定单服务状态
1;订单正在使用。
2:订单未开始。
3:订单已经使用过，现在暂时未开始使用(该订单从其他服务转移而来)。
4:订单已过期。
5:订单已被退订。
6:定单已被转移到其他云存服务。
                     * @param _status 定单服务状态
1;订单正在使用。
2:订单未开始。
3:订单已经使用过，现在暂时未开始使用(该订单从其他服务转移而来)。
4:订单已过期。
5:订单已被退订。
6:定单已被转移到其他云存服务。
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
                     * 获取定单服务生效时间
                     * @return StartTime 定单服务生效时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置定单服务生效时间
                     * @param _startTime 定单服务生效时间
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取定单服务失效时间
                     * @return EndTime 定单服务失效时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置定单服务失效时间
                     * @param _endTime 定单服务失效时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 定单唯一性ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 云存套餐ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 定单服务状态
1;订单正在使用。
2:订单未开始。
3:订单已经使用过，现在暂时未开始使用(该订单从其他服务转移而来)。
4:订单已过期。
5:订单已被退订。
6:定单已被转移到其他云存服务。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 定单服务生效时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 定单服务失效时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_STORAGEORDER_H_
