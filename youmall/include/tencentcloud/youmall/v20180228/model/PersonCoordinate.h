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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONCOORDINATE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONCOORDINATE_H_

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
                * 轨迹点坐标
                */
                class PersonCoordinate : public AbstractModel
                {
                public:
                    PersonCoordinate();
                    ~PersonCoordinate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CAD图X坐标
                     * @return CADX CAD图X坐标
                     * 
                     */
                    double GetCADX() const;

                    /**
                     * 设置CAD图X坐标
                     * @param _cADX CAD图X坐标
                     * 
                     */
                    void SetCADX(const double& _cADX);

                    /**
                     * 判断参数 CADX 是否已赋值
                     * @return CADX 是否已赋值
                     * 
                     */
                    bool CADXHasBeenSet() const;

                    /**
                     * 获取CAD图Y坐标
                     * @return CADY CAD图Y坐标
                     * 
                     */
                    double GetCADY() const;

                    /**
                     * 设置CAD图Y坐标
                     * @param _cADY CAD图Y坐标
                     * 
                     */
                    void SetCADY(const double& _cADY);

                    /**
                     * 判断参数 CADY 是否已赋值
                     * @return CADY 是否已赋值
                     * 
                     */
                    bool CADYHasBeenSet() const;

                    /**
                     * 获取抓拍时间点
                     * @return CapTime 抓拍时间点
                     * 
                     */
                    std::string GetCapTime() const;

                    /**
                     * 设置抓拍时间点
                     * @param _capTime 抓拍时间点
                     * 
                     */
                    void SetCapTime(const std::string& _capTime);

                    /**
                     * 判断参数 CapTime 是否已赋值
                     * @return CapTime 是否已赋值
                     * 
                     */
                    bool CapTimeHasBeenSet() const;

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
                     * 获取卖场区域类型
                     * @return MallAreaType 卖场区域类型
                     * 
                     */
                    int64_t GetMallAreaType() const;

                    /**
                     * 设置卖场区域类型
                     * @param _mallAreaType 卖场区域类型
                     * 
                     */
                    void SetMallAreaType(const int64_t& _mallAreaType);

                    /**
                     * 判断参数 MallAreaType 是否已赋值
                     * @return MallAreaType 是否已赋值
                     * 
                     */
                    bool MallAreaTypeHasBeenSet() const;

                    /**
                     * 获取坐标编号
                     * @return PosId 坐标编号
                     * 
                     */
                    int64_t GetPosId() const;

                    /**
                     * 设置坐标编号
                     * @param _posId 坐标编号
                     * 
                     */
                    void SetPosId(const int64_t& _posId);

                    /**
                     * 判断参数 PosId 是否已赋值
                     * @return PosId 是否已赋值
                     * 
                     */
                    bool PosIdHasBeenSet() const;

                    /**
                     * 获取门店编号
                     * @return ShopId 门店编号
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 设置门店编号
                     * @param _shopId 门店编号
                     * 
                     */
                    void SetShopId(const int64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取事件
                     * @return Event 事件
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置事件
                     * @param _event 事件
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                private:

                    /**
                     * CAD图X坐标
                     */
                    double m_cADX;
                    bool m_cADXHasBeenSet;

                    /**
                     * CAD图Y坐标
                     */
                    double m_cADY;
                    bool m_cADYHasBeenSet;

                    /**
                     * 抓拍时间点
                     */
                    std::string m_capTime;
                    bool m_capTimeHasBeenSet;

                    /**
                     * 抓拍图片
                     */
                    std::string m_capPic;
                    bool m_capPicHasBeenSet;

                    /**
                     * 卖场区域类型
                     */
                    int64_t m_mallAreaType;
                    bool m_mallAreaTypeHasBeenSet;

                    /**
                     * 坐标编号
                     */
                    int64_t m_posId;
                    bool m_posIdHasBeenSet;

                    /**
                     * 门店编号
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 事件
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONCOORDINATE_H_
