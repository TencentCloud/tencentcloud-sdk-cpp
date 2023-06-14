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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTRACEPOINT_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTRACEPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 客户轨迹点
                */
                class PersonTracePoint : public AbstractModel
                {
                public:
                    PersonTracePoint();
                    ~PersonTracePoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卖场区域编码
                     * @return MallAreaId 卖场区域编码
                     * 
                     */
                    uint64_t GetMallAreaId() const;

                    /**
                     * 设置卖场区域编码
                     * @param _mallAreaId 卖场区域编码
                     * 
                     */
                    void SetMallAreaId(const uint64_t& _mallAreaId);

                    /**
                     * 判断参数 MallAreaId 是否已赋值
                     * @return MallAreaId 是否已赋值
                     * 
                     */
                    bool MallAreaIdHasBeenSet() const;

                    /**
                     * 获取门店编码
                     * @return ShopId 门店编码
                     * 
                     */
                    uint64_t GetShopId() const;

                    /**
                     * 设置门店编码
                     * @param _shopId 门店编码
                     * 
                     */
                    void SetShopId(const uint64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取卖场区域类型
                     * @return MallAreaType 卖场区域类型
                     * 
                     */
                    uint64_t GetMallAreaType() const;

                    /**
                     * 设置卖场区域类型
                     * @param _mallAreaType 卖场区域类型
                     * 
                     */
                    void SetMallAreaType(const uint64_t& _mallAreaType);

                    /**
                     * 判断参数 MallAreaType 是否已赋值
                     * @return MallAreaType 是否已赋值
                     * 
                     */
                    bool MallAreaTypeHasBeenSet() const;

                    /**
                     * 获取轨迹事件
                     * @return TraceEventType 轨迹事件
                     * 
                     */
                    uint64_t GetTraceEventType() const;

                    /**
                     * 设置轨迹事件
                     * @param _traceEventType 轨迹事件
                     * 
                     */
                    void SetTraceEventType(const uint64_t& _traceEventType);

                    /**
                     * 判断参数 TraceEventType 是否已赋值
                     * @return TraceEventType 是否已赋值
                     * 
                     */
                    bool TraceEventTypeHasBeenSet() const;

                    /**
                     * 获取轨迹事件发生时间点
                     * @return TraceEventTime 轨迹事件发生时间点
                     * 
                     */
                    std::string GetTraceEventTime() const;

                    /**
                     * 设置轨迹事件发生时间点
                     * @param _traceEventTime 轨迹事件发生时间点
                     * 
                     */
                    void SetTraceEventTime(const std::string& _traceEventTime);

                    /**
                     * 判断参数 TraceEventTime 是否已赋值
                     * @return TraceEventTime 是否已赋值
                     * 
                     */
                    bool TraceEventTimeHasBeenSet() const;

                    /**
                     * 获取抓拍图片
                     * @return CapPic 抓拍图片
                     * 
                     */
                    std::string GetCapPic() const;

                    /**
                     * 设置抓拍图片
                     * @param _capPic 抓拍图片
                     * 
                     */
                    void SetCapPic(const std::string& _capPic);

                    /**
                     * 判断参数 CapPic 是否已赋值
                     * @return CapPic 是否已赋值
                     * 
                     */
                    bool CapPicHasBeenSet() const;

                    /**
                     * 获取购物袋类型
                     * @return ShoppingBagType 购物袋类型
                     * 
                     */
                    uint64_t GetShoppingBagType() const;

                    /**
                     * 设置购物袋类型
                     * @param _shoppingBagType 购物袋类型
                     * 
                     */
                    void SetShoppingBagType(const uint64_t& _shoppingBagType);

                    /**
                     * 判断参数 ShoppingBagType 是否已赋值
                     * @return ShoppingBagType 是否已赋值
                     * 
                     */
                    bool ShoppingBagTypeHasBeenSet() const;

                    /**
                     * 获取购物袋数量
                     * @return ShoppingBagCount 购物袋数量
                     * 
                     */
                    uint64_t GetShoppingBagCount() const;

                    /**
                     * 设置购物袋数量
                     * @param _shoppingBagCount 购物袋数量
                     * 
                     */
                    void SetShoppingBagCount(const uint64_t& _shoppingBagCount);

                    /**
                     * 判断参数 ShoppingBagCount 是否已赋值
                     * @return ShoppingBagCount 是否已赋值
                     * 
                     */
                    bool ShoppingBagCountHasBeenSet() const;

                private:

                    /**
                     * 卖场区域编码
                     */
                    uint64_t m_mallAreaId;
                    bool m_mallAreaIdHasBeenSet;

                    /**
                     * 门店编码
                     */
                    uint64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 卖场区域类型
                     */
                    uint64_t m_mallAreaType;
                    bool m_mallAreaTypeHasBeenSet;

                    /**
                     * 轨迹事件
                     */
                    uint64_t m_traceEventType;
                    bool m_traceEventTypeHasBeenSet;

                    /**
                     * 轨迹事件发生时间点
                     */
                    std::string m_traceEventTime;
                    bool m_traceEventTimeHasBeenSet;

                    /**
                     * 抓拍图片
                     */
                    std::string m_capPic;
                    bool m_capPicHasBeenSet;

                    /**
                     * 购物袋类型
                     */
                    uint64_t m_shoppingBagType;
                    bool m_shoppingBagTypeHasBeenSet;

                    /**
                     * 购物袋数量
                     */
                    uint64_t m_shoppingBagCount;
                    bool m_shoppingBagCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTRACEPOINT_H_
