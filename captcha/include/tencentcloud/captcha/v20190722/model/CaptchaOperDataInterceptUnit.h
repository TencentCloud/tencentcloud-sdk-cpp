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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATAINTERCEPTUNIT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATAINTERCEPTUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaOperData方法 拦截情况type = 2 返回的数据结构
                */
                class CaptchaOperDataInterceptUnit : public AbstractModel
                {
                public:
                    CaptchaOperDataInterceptUnit();
                    ~CaptchaOperDataInterceptUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return DateKey 时间
                     * 
                     */
                    std::string GetDateKey() const;

                    /**
                     * 设置时间
                     * @param _dateKey 时间
                     * 
                     */
                    void SetDateKey(const std::string& _dateKey);

                    /**
                     * 判断参数 DateKey 是否已赋值
                     * @return DateKey 是否已赋值
                     * 
                     */
                    bool DateKeyHasBeenSet() const;

                    /**
                     * 获取停止验证数量
                     * @return AllStopCnt 停止验证数量
                     * 
                     */
                    double GetAllStopCnt() const;

                    /**
                     * 设置停止验证数量
                     * @param _allStopCnt 停止验证数量
                     * 
                     */
                    void SetAllStopCnt(const double& _allStopCnt);

                    /**
                     * 判断参数 AllStopCnt 是否已赋值
                     * @return AllStopCnt 是否已赋值
                     * 
                     */
                    bool AllStopCntHasBeenSet() const;

                    /**
                     * 获取图片停止加载数量
                     * @return PicStopCnt 图片停止加载数量
                     * 
                     */
                    double GetPicStopCnt() const;

                    /**
                     * 设置图片停止加载数量
                     * @param _picStopCnt 图片停止加载数量
                     * 
                     */
                    void SetPicStopCnt(const double& _picStopCnt);

                    /**
                     * 判断参数 PicStopCnt 是否已赋值
                     * @return PicStopCnt 是否已赋值
                     * 
                     */
                    bool PicStopCntHasBeenSet() const;

                    /**
                     * 获取策略拦截数量
                     * @return StrategyStopCnt 策略拦截数量
                     * 
                     */
                    double GetStrategyStopCnt() const;

                    /**
                     * 设置策略拦截数量
                     * @param _strategyStopCnt 策略拦截数量
                     * 
                     */
                    void SetStrategyStopCnt(const double& _strategyStopCnt);

                    /**
                     * 判断参数 StrategyStopCnt 是否已赋值
                     * @return StrategyStopCnt 是否已赋值
                     * 
                     */
                    bool StrategyStopCntHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_dateKey;
                    bool m_dateKeyHasBeenSet;

                    /**
                     * 停止验证数量
                     */
                    double m_allStopCnt;
                    bool m_allStopCntHasBeenSet;

                    /**
                     * 图片停止加载数量
                     */
                    double m_picStopCnt;
                    bool m_picStopCntHasBeenSet;

                    /**
                     * 策略拦截数量
                     */
                    double m_strategyStopCnt;
                    bool m_strategyStopCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATAINTERCEPTUNIT_H_
