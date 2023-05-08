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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>
#include <tencentcloud/ocr/v20181119/model/SingleInvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 混贴票据单张发票识别信息
                */
                class InvoiceItem : public AbstractModel
                {
                public:
                    InvoiceItem();
                    ~InvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别结果。
OK：表示识别成功；FailedOperation.UnsupportedInvioce：表示不支持识别；
FailedOperation.UnKnowError：表示识别失败；
其它错误码见各个票据接口的定义。
                     * @return Code 识别结果。
OK：表示识别成功；FailedOperation.UnsupportedInvioce：表示不支持识别；
FailedOperation.UnKnowError：表示识别失败；
其它错误码见各个票据接口的定义。
                     */
                    std::string GetCode() const;

                    /**
                     * 设置识别结果。
OK：表示识别成功；FailedOperation.UnsupportedInvioce：表示不支持识别；
FailedOperation.UnKnowError：表示识别失败；
其它错误码见各个票据接口的定义。
                     * @param Code 识别结果。
OK：表示识别成功；FailedOperation.UnsupportedInvioce：表示不支持识别；
FailedOperation.UnKnowError：表示识别失败；
其它错误码见各个票据接口的定义。
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票）
12：购车发票
13：过路过桥费发票
15：非税发票
16：全电发票
                     * @return Type 识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票）
12：购车发票
13：过路过桥费发票
15：非税发票
16：全电发票
                     */
                    int64_t GetType() const;

                    /**
                     * 设置识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票）
12：购车发票
13：过路过桥费发票
15：非税发票
16：全电发票
                     * @param Type 识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票）
12：购车发票
13：过路过桥费发票
15：非税发票
16：全电发票
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取旋转后的图片四点坐标。
                     * @return Polygon 旋转后的图片四点坐标。
                     */
                    Polygon GetPolygon() const;

                    /**
                     * 设置旋转后的图片四点坐标。
                     * @param Polygon 旋转后的图片四点坐标。
                     */
                    void SetPolygon(const Polygon& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取识别出的图片在混贴票据图片中的旋转角度。
                     * @return Angle 识别出的图片在混贴票据图片中的旋转角度。
                     */
                    double GetAngle() const;

                    /**
                     * 设置识别出的图片在混贴票据图片中的旋转角度。
                     * @param Angle 识别出的图片在混贴票据图片中的旋转角度。
                     */
                    void SetAngle(const double& _angle);

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取识别到的内容。
                     * @return SingleInvoiceInfos 识别到的内容。
                     */
                    SingleInvoiceItem GetSingleInvoiceInfos() const;

                    /**
                     * 设置识别到的内容。
                     * @param SingleInvoiceInfos 识别到的内容。
                     */
                    void SetSingleInvoiceInfos(const SingleInvoiceItem& _singleInvoiceInfos);

                    /**
                     * 判断参数 SingleInvoiceInfos 是否已赋值
                     * @return SingleInvoiceInfos 是否已赋值
                     */
                    bool SingleInvoiceInfosHasBeenSet() const;

                    /**
                     * 获取发票处于识别图片或PDF文件中的页教，默认从1开始。
                     * @return Page 发票处于识别图片或PDF文件中的页教，默认从1开始。
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置发票处于识别图片或PDF文件中的页教，默认从1开始。
                     * @param Page 发票处于识别图片或PDF文件中的页教，默认从1开始。
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取发票详细类型，详见下方 SubType 返回值说明
                     * @return SubType 发票详细类型，详见下方 SubType 返回值说明
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置发票详细类型，详见下方 SubType 返回值说明
                     * @param SubType 发票详细类型，详见下方 SubType 返回值说明
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取发票类型描述，详见下方 TypeDescription  返回值说明
                     * @return TypeDescription 发票类型描述，详见下方 TypeDescription  返回值说明
                     */
                    std::string GetTypeDescription() const;

                    /**
                     * 设置发票类型描述，详见下方 TypeDescription  返回值说明
                     * @param TypeDescription 发票类型描述，详见下方 TypeDescription  返回值说明
                     */
                    void SetTypeDescription(const std::string& _typeDescription);

                    /**
                     * 判断参数 TypeDescription 是否已赋值
                     * @return TypeDescription 是否已赋值
                     */
                    bool TypeDescriptionHasBeenSet() const;

                    /**
                     * 获取切割单图文件，Base64编码后的切图后的图片文件，开启 EnableCutImage 后进行返回
                     * @return CutImage 切割单图文件，Base64编码后的切图后的图片文件，开启 EnableCutImage 后进行返回
                     */
                    std::string GetCutImage() const;

                    /**
                     * 设置切割单图文件，Base64编码后的切图后的图片文件，开启 EnableCutImage 后进行返回
                     * @param CutImage 切割单图文件，Base64编码后的切图后的图片文件，开启 EnableCutImage 后进行返回
                     */
                    void SetCutImage(const std::string& _cutImage);

                    /**
                     * 判断参数 CutImage 是否已赋值
                     * @return CutImage 是否已赋值
                     */
                    bool CutImageHasBeenSet() const;

                    /**
                     * 获取发票详细类型描述，详见下方 SubType 返回值说明
                     * @return SubTypeDescription 发票详细类型描述，详见下方 SubType 返回值说明
                     */
                    std::string GetSubTypeDescription() const;

                    /**
                     * 设置发票详细类型描述，详见下方 SubType 返回值说明
                     * @param SubTypeDescription 发票详细类型描述，详见下方 SubType 返回值说明
                     */
                    void SetSubTypeDescription(const std::string& _subTypeDescription);

                    /**
                     * 判断参数 SubTypeDescription 是否已赋值
                     * @return SubTypeDescription 是否已赋值
                     */
                    bool SubTypeDescriptionHasBeenSet() const;

                private:

                    /**
                     * 识别结果。
OK：表示识别成功；FailedOperation.UnsupportedInvioce：表示不支持识别；
FailedOperation.UnKnowError：表示识别失败；
其它错误码见各个票据接口的定义。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 识别出的图片所属的票据类型。
-1：未知类型
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票）
12：购车发票
13：过路过桥费发票
15：非税发票
16：全电发票
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 旋转后的图片四点坐标。
                     */
                    Polygon m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 识别出的图片在混贴票据图片中的旋转角度。
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 识别到的内容。
                     */
                    SingleInvoiceItem m_singleInvoiceInfos;
                    bool m_singleInvoiceInfosHasBeenSet;

                    /**
                     * 发票处于识别图片或PDF文件中的页教，默认从1开始。
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 发票详细类型，详见下方 SubType 返回值说明
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 发票类型描述，详见下方 TypeDescription  返回值说明
                     */
                    std::string m_typeDescription;
                    bool m_typeDescriptionHasBeenSet;

                    /**
                     * 切割单图文件，Base64编码后的切图后的图片文件，开启 EnableCutImage 后进行返回
                     */
                    std::string m_cutImage;
                    bool m_cutImageHasBeenSet;

                    /**
                     * 发票详细类型描述，详见下方 SubType 返回值说明
                     */
                    std::string m_subTypeDescription;
                    bool m_subTypeDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEITEM_H_
