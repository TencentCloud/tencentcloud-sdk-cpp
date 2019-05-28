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

#ifndef TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
#define TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ocr/v20181119/model/ArithmeticOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/ArithmeticOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/EnglishOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/EnglishOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralFastOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralFastOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VinOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VinOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/WaybillOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/WaybillOCRResponse.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            class OcrClient : public AbstractClient
            {
            public:
                OcrClient(const Credential &credential, const std::string &region);
                OcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ArithmeticOCRResponse> ArithmeticOCROutcome;
                typedef std::future<ArithmeticOCROutcome> ArithmeticOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ArithmeticOCRRequest&, ArithmeticOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ArithmeticOCRAsyncHandler;
                typedef Outcome<Error, Model::EnglishOCRResponse> EnglishOCROutcome;
                typedef std::future<EnglishOCROutcome> EnglishOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EnglishOCRRequest&, EnglishOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnglishOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralAccurateOCRResponse> GeneralAccurateOCROutcome;
                typedef std::future<GeneralAccurateOCROutcome> GeneralAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralAccurateOCRRequest&, GeneralAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralAccurateOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralBasicOCRResponse> GeneralBasicOCROutcome;
                typedef std::future<GeneralBasicOCROutcome> GeneralBasicOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralBasicOCRRequest&, GeneralBasicOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralBasicOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralFastOCRResponse> GeneralFastOCROutcome;
                typedef std::future<GeneralFastOCROutcome> GeneralFastOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralFastOCRRequest&, GeneralFastOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralFastOCRAsyncHandler;
                typedef Outcome<Error, Model::IDCardOCRResponse> IDCardOCROutcome;
                typedef std::future<IDCardOCROutcome> IDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::IDCardOCRRequest&, IDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> IDCardOCRAsyncHandler;
                typedef Outcome<Error, Model::TableOCRResponse> TableOCROutcome;
                typedef std::future<TableOCROutcome> TableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TableOCRRequest&, TableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TableOCRAsyncHandler;
                typedef Outcome<Error, Model::VinOCRResponse> VinOCROutcome;
                typedef std::future<VinOCROutcome> VinOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VinOCRRequest&, VinOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VinOCRAsyncHandler;
                typedef Outcome<Error, Model::WaybillOCRResponse> WaybillOCROutcome;
                typedef std::future<WaybillOCROutcome> WaybillOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::WaybillOCRRequest&, WaybillOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> WaybillOCRAsyncHandler;



                /**
                 *本接口支持作业算式题目的自动识别，目前覆盖 K12 学力范围内的 14 种题型，包括加减乘除四则运算、分数四则运算、竖式四则运算、脱式计算等。
                 * @param req ArithmeticOCRRequest
                 * @return ArithmeticOCROutcome
                 */
                ArithmeticOCROutcome ArithmeticOCR(const Model::ArithmeticOCRRequest &request);
                void ArithmeticOCRAsync(const Model::ArithmeticOCRRequest& request, const ArithmeticOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ArithmeticOCROutcomeCallable ArithmeticOCRCallable(const Model::ArithmeticOCRRequest& request);

                /**
                 *本接口支持图像英文文字的检测和识别，返回文字框位置与文字内容。支持多场景、任意版面下的英文、字母、数字和常见字符的识别，同时覆盖英文印刷体和英文手写体识别。
                 * @param req EnglishOCRRequest
                 * @return EnglishOCROutcome
                 */
                EnglishOCROutcome EnglishOCR(const Model::EnglishOCRRequest &request);
                void EnglishOCRAsync(const Model::EnglishOCRRequest& request, const EnglishOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnglishOCROutcomeCallable EnglishOCRCallable(const Model::EnglishOCRRequest& request);

                /**
                 *本接口支持图像整体文字的检测和识别，返回文字框位置与文字内容。相比通用印刷体识别接口，准确率和召回率更高。
                 * @param req GeneralAccurateOCRRequest
                 * @return GeneralAccurateOCROutcome
                 */
                GeneralAccurateOCROutcome GeneralAccurateOCR(const Model::GeneralAccurateOCRRequest &request);
                void GeneralAccurateOCRAsync(const Model::GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralAccurateOCROutcomeCallable GeneralAccurateOCRCallable(const Model::GeneralAccurateOCRRequest& request);

                /**
                 *本接口支持多场景、任意版面下整图文字的识别，包括中英文、字母、数字和日文、韩文的识别。应用场景包括：印刷文档识别、网络图片识别、广告图文字识别、街景店招识别、菜单识别、视频标题识别、头像文字识别等。
                 * @param req GeneralBasicOCRRequest
                 * @return GeneralBasicOCROutcome
                 */
                GeneralBasicOCROutcome GeneralBasicOCR(const Model::GeneralBasicOCRRequest &request);
                void GeneralBasicOCRAsync(const Model::GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralBasicOCROutcomeCallable GeneralBasicOCRCallable(const Model::GeneralBasicOCRRequest& request);

                /**
                 *本接口支持图片中整体文字的检测和识别，返回文字框位置与文字内容。相比通用印刷体识别接口，识别速度更快、支持的 QPS 更高。
                 * @param req GeneralFastOCRRequest
                 * @return GeneralFastOCROutcome
                 */
                GeneralFastOCROutcome GeneralFastOCR(const Model::GeneralFastOCRRequest &request);
                void GeneralFastOCRAsync(const Model::GeneralFastOCRRequest& request, const GeneralFastOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralFastOCROutcomeCallable GeneralFastOCRCallable(const Model::GeneralFastOCRRequest& request);

                /**
                 *本接口支持二代身份证正反面所有字段的识别，包括姓名、性别、民族、出生日期、住址、公民身份证号、签发机关、有效期限；具备身份证照片、人像照片的裁剪功能和翻拍件、复印件的识别告警功能。
                 * @param req IDCardOCRRequest
                 * @return IDCardOCROutcome
                 */
                IDCardOCROutcome IDCardOCR(const Model::IDCardOCRRequest &request);
                void IDCardOCRAsync(const Model::IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IDCardOCROutcomeCallable IDCardOCRCallable(const Model::IDCardOCRRequest& request);

                /**
                 *本接口支持图片内表格文档的检测和识别，返回每个单元格的文字内容，支持将识别结果保存为 Excel 格式。
                 * @param req TableOCRRequest
                 * @return TableOCROutcome
                 */
                TableOCROutcome TableOCR(const Model::TableOCRRequest &request);
                void TableOCRAsync(const Model::TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TableOCROutcomeCallable TableOCRCallable(const Model::TableOCRRequest& request);

                /**
                 *本接口支持图片内车辆识别代号（VIN）的检测和识别。
                 * @param req VinOCRRequest
                 * @return VinOCROutcome
                 */
                VinOCROutcome VinOCR(const Model::VinOCRRequest &request);
                void VinOCRAsync(const Model::VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VinOCROutcomeCallable VinOCRCallable(const Model::VinOCRRequest& request);

                /**
                 *本接口支持市面上主流版式电子运单的识别，包括收件人和寄件人的姓名、电话、地址以及运单号等字段。
                 * @param req WaybillOCRRequest
                 * @return WaybillOCROutcome
                 */
                WaybillOCROutcome WaybillOCR(const Model::WaybillOCRRequest &request);
                void WaybillOCRAsync(const Model::WaybillOCRRequest& request, const WaybillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WaybillOCROutcomeCallable WaybillOCRCallable(const Model::WaybillOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
