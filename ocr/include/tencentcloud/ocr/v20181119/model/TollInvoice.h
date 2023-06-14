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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 过路过桥费发票
                */
                class TollInvoice : public AbstractModel
                {
                public:
                    TollInvoice();
                    ~TollInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票名称
                     * @return Title 发票名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置发票名称
                     * @param _title 发票名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return Code 发票代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置发票代码
                     * @param _code 发票代码
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
                     * 获取发票号码
                     * @return Number 发票号码
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
                     * @param _number 发票号码
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取价税合计（小写）
                     * @return Total 价税合计（小写）
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置价税合计（小写）
                     * @param _total 价税合计（小写）
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取发票消费类型
                     * @return Kind 发票消费类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置发票消费类型
                     * @param _kind 发票消费类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return Time 时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
                     * @param _time 时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取入口
                     * @return Entrance 入口
                     * 
                     */
                    std::string GetEntrance() const;

                    /**
                     * 设置入口
                     * @param _entrance 入口
                     * 
                     */
                    void SetEntrance(const std::string& _entrance);

                    /**
                     * 判断参数 Entrance 是否已赋值
                     * @return Entrance 是否已赋值
                     * 
                     */
                    bool EntranceHasBeenSet() const;

                    /**
                     * 获取出口
                     * @return Exit 出口
                     * 
                     */
                    std::string GetExit() const;

                    /**
                     * 设置出口
                     * @param _exit 出口
                     * 
                     */
                    void SetExit(const std::string& _exit);

                    /**
                     * 判断参数 Exit 是否已赋值
                     * @return Exit 是否已赋值
                     * 
                     */
                    bool ExitHasBeenSet() const;

                    /**
                     * 获取高速标志（0：没有，1：有）
                     * @return HighwayMark 高速标志（0：没有，1：有）
                     * 
                     */
                    int64_t GetHighwayMark() const;

                    /**
                     * 设置高速标志（0：没有，1：有）
                     * @param _highwayMark 高速标志（0：没有，1：有）
                     * 
                     */
                    void SetHighwayMark(const int64_t& _highwayMark);

                    /**
                     * 判断参数 HighwayMark 是否已赋值
                     * @return HighwayMark 是否已赋值
                     * 
                     */
                    bool HighwayMarkHasBeenSet() const;

                    /**
                     * 获取是否存在二维码（1：有，0：无）
                     * @return QRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置是否存在二维码（1：有，0：无）
                     * @param _qRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     * 
                     */
                    bool QRCodeMarkHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 价税合计（小写）
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 入口
                     */
                    std::string m_entrance;
                    bool m_entranceHasBeenSet;

                    /**
                     * 出口
                     */
                    std::string m_exit;
                    bool m_exitHasBeenSet;

                    /**
                     * 高速标志（0：没有，1：有）
                     */
                    int64_t m_highwayMark;
                    bool m_highwayMarkHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICE_H_
