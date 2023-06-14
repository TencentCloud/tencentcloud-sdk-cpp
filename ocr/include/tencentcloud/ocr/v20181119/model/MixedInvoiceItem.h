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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>
#include <tencentcloud/ocr/v20181119/model/SingleInvoiceInfo.h>


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
                class MixedInvoiceItem : public AbstractModel
                {
                public:
                    MixedInvoiceItem();
                    ~MixedInvoiceItem() = default;
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
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置识别结果。
OK：表示识别成功；FailedOperation.UnsupportedInvioce：表示不支持识别；
FailedOperation.UnKnowError：表示识别失败；
其它错误码见各个票据接口的定义。
                     * @param _code 识别结果。
OK：表示识别成功；FailedOperation.UnsupportedInvioce：表示不支持识别；
FailedOperation.UnKnowError：表示识别失败；
其它错误码见各个票据接口的定义。
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
                     * 
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
                     * @param _type 识别出的图片所属的票据类型。
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
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * @return Rect 识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * 
                     */
                    Rect GetRect() const;

                    /**
                     * 设置识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * @param _rect 识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     * 
                     */
                    void SetRect(const Rect& _rect);

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取识别出的图片在混贴票据图片中的旋转角度。
                     * @return Angle 识别出的图片在混贴票据图片中的旋转角度。
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 设置识别出的图片在混贴票据图片中的旋转角度。
                     * @param _angle 识别出的图片在混贴票据图片中的旋转角度。
                     * 
                     */
                    void SetAngle(const double& _angle);

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取识别到的内容。
                     * @return SingleInvoiceInfos 识别到的内容。
                     * 
                     */
                    std::vector<SingleInvoiceInfo> GetSingleInvoiceInfos() const;

                    /**
                     * 设置识别到的内容。
                     * @param _singleInvoiceInfos 识别到的内容。
                     * 
                     */
                    void SetSingleInvoiceInfos(const std::vector<SingleInvoiceInfo>& _singleInvoiceInfos);

                    /**
                     * 判断参数 SingleInvoiceInfos 是否已赋值
                     * @return SingleInvoiceInfos 是否已赋值
                     * 
                     */
                    bool SingleInvoiceInfosHasBeenSet() const;

                    /**
                     * 获取发票处于识别图片或PDF文件中的页教，默认从1开始。
                     * @return Page 发票处于识别图片或PDF文件中的页教，默认从1开始。
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置发票处于识别图片或PDF文件中的页教，默认从1开始。
                     * @param _page 发票处于识别图片或PDF文件中的页教，默认从1开始。
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

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
                     * 识别出的图片在混贴票据图片中的位置信息。与Angel结合可以得出原图位置，组成RotatedRect((X+0.5\*Width,Y+0.5\*Height), (Width, Height), Angle)，详情可参考OpenCV文档。
                     */
                    Rect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * 识别出的图片在混贴票据图片中的旋转角度。
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 识别到的内容。
                     */
                    std::vector<SingleInvoiceInfo> m_singleInvoiceInfos;
                    bool m_singleInvoiceInfosHasBeenSet;

                    /**
                     * 发票处于识别图片或PDF文件中的页教，默认从1开始。
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEITEM_H_
