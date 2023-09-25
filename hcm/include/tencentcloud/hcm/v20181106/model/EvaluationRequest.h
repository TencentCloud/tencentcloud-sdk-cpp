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

#ifndef TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONREQUEST_H_
#define TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hcm
    {
        namespace V20181106
        {
            namespace Model
            {
                /**
                * Evaluation请求参数结构体
                */
                class EvaluationRequest : public AbstractModel
                {
                public:
                    EvaluationRequest();
                    ~EvaluationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片唯一标识，一张图片一个SessionId；
                     * @return SessionId 图片唯一标识，一张图片一个SessionId；
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置图片唯一标识，一张图片一个SessionId；
                     * @param _sessionId 图片唯一标识，一张图片一个SessionId；
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     * @return Image 图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     * @param _image 图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     * @return HcmAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     * 
                     */
                    std::string GetHcmAppid() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     * @param _hcmAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     * 
                     */
                    void SetHcmAppid(const std::string& _hcmAppid);

                    /**
                     * 判断参数 HcmAppid 是否已赋值
                     * @return HcmAppid 是否已赋值
                     * 
                     */
                    bool HcmAppidHasBeenSet() const;

                    /**
                     * 获取图片url，与Image参数二者填一即可；
                     * @return Url 图片url，与Image参数二者填一即可；
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片url，与Image参数二者填一即可；
                     * @param _url 图片url，与Image参数二者填一即可；
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     * @return SupportHorizontalImage 横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     * 
                     */
                    bool GetSupportHorizontalImage() const;

                    /**
                     * 设置横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     * @param _supportHorizontalImage 横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     * 
                     */
                    void SetSupportHorizontalImage(const bool& _supportHorizontalImage);

                    /**
                     * 判断参数 SupportHorizontalImage 是否已赋值
                     * @return SupportHorizontalImage 是否已赋值
                     * 
                     */
                    bool SupportHorizontalImageHasBeenSet() const;

                    /**
                     * 获取拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     * @return RejectNonArithmeticImage 拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     * 
                     */
                    bool GetRejectNonArithmeticImage() const;

                    /**
                     * 设置拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     * @param _rejectNonArithmeticImage 拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     * 
                     */
                    void SetRejectNonArithmeticImage(const bool& _rejectNonArithmeticImage);

                    /**
                     * 判断参数 RejectNonArithmeticImage 是否已赋值
                     * @return RejectNonArithmeticImage 是否已赋值
                     * 
                     */
                    bool RejectNonArithmeticImageHasBeenSet() const;

                    /**
                     * 获取异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @return IsAsync 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @deprecated
                     */
                    int64_t GetIsAsync() const;

                    /**
                     * 设置异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @param _isAsync 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @deprecated
                     */
                    void SetIsAsync(const int64_t& _isAsync);

                    /**
                     * 判断参数 IsAsync 是否已赋值
                     * @return IsAsync 是否已赋值
                     * @deprecated
                     */
                    bool IsAsyncHasBeenSet() const;

                    /**
                     * 获取是否展开耦合算式中的竖式计算
                     * @return EnableDispRelatedVertical 是否展开耦合算式中的竖式计算
                     * 
                     */
                    bool GetEnableDispRelatedVertical() const;

                    /**
                     * 设置是否展开耦合算式中的竖式计算
                     * @param _enableDispRelatedVertical 是否展开耦合算式中的竖式计算
                     * 
                     */
                    void SetEnableDispRelatedVertical(const bool& _enableDispRelatedVertical);

                    /**
                     * 判断参数 EnableDispRelatedVertical 是否已赋值
                     * @return EnableDispRelatedVertical 是否已赋值
                     * 
                     */
                    bool EnableDispRelatedVerticalHasBeenSet() const;

                    /**
                     * 获取是否展示竖式算式的中间结果和格式控制字符
                     * @return EnableDispMidresult 是否展示竖式算式的中间结果和格式控制字符
                     * 
                     */
                    bool GetEnableDispMidresult() const;

                    /**
                     * 设置是否展示竖式算式的中间结果和格式控制字符
                     * @param _enableDispMidresult 是否展示竖式算式的中间结果和格式控制字符
                     * 
                     */
                    void SetEnableDispMidresult(const bool& _enableDispMidresult);

                    /**
                     * 判断参数 EnableDispMidresult 是否已赋值
                     * @return EnableDispMidresult 是否已赋值
                     * 
                     */
                    bool EnableDispMidresultHasBeenSet() const;

                    /**
                     * 获取是否开启pdf识别，默认开启
                     * @return EnablePdfRecognize 是否开启pdf识别，默认开启
                     * 
                     */
                    bool GetEnablePdfRecognize() const;

                    /**
                     * 设置是否开启pdf识别，默认开启
                     * @param _enablePdfRecognize 是否开启pdf识别，默认开启
                     * 
                     */
                    void SetEnablePdfRecognize(const bool& _enablePdfRecognize);

                    /**
                     * 判断参数 EnablePdfRecognize 是否已赋值
                     * @return EnablePdfRecognize 是否已赋值
                     * 
                     */
                    bool EnablePdfRecognizeHasBeenSet() const;

                    /**
                     * 获取pdf页码，从0开始，默认为0
                     * @return PdfPageIndex pdf页码，从0开始，默认为0
                     * 
                     */
                    int64_t GetPdfPageIndex() const;

                    /**
                     * 设置pdf页码，从0开始，默认为0
                     * @param _pdfPageIndex pdf页码，从0开始，默认为0
                     * 
                     */
                    void SetPdfPageIndex(const int64_t& _pdfPageIndex);

                    /**
                     * 判断参数 PdfPageIndex 是否已赋值
                     * @return PdfPageIndex 是否已赋值
                     * 
                     */
                    bool PdfPageIndexHasBeenSet() const;

                    /**
                     * 获取是否返回LaTex，默认为0返回普通格式，设置成1返回LaTex格式
                     * @return LaTex 是否返回LaTex，默认为0返回普通格式，设置成1返回LaTex格式
                     * 
                     */
                    int64_t GetLaTex() const;

                    /**
                     * 设置是否返回LaTex，默认为0返回普通格式，设置成1返回LaTex格式
                     * @param _laTex 是否返回LaTex，默认为0返回普通格式，设置成1返回LaTex格式
                     * 
                     */
                    void SetLaTex(const int64_t& _laTex);

                    /**
                     * 判断参数 LaTex 是否已赋值
                     * @return LaTex 是否已赋值
                     * 
                     */
                    bool LaTexHasBeenSet() const;

                    /**
                     * 获取用于选择是否拒绝模糊题 目。打开则丢弃模糊题目， 不进行后续的判题返回结 果。
                     * @return RejectVagueArithmetic 用于选择是否拒绝模糊题 目。打开则丢弃模糊题目， 不进行后续的判题返回结 果。
                     * 
                     */
                    bool GetRejectVagueArithmetic() const;

                    /**
                     * 设置用于选择是否拒绝模糊题 目。打开则丢弃模糊题目， 不进行后续的判题返回结 果。
                     * @param _rejectVagueArithmetic 用于选择是否拒绝模糊题 目。打开则丢弃模糊题目， 不进行后续的判题返回结 果。
                     * 
                     */
                    void SetRejectVagueArithmetic(const bool& _rejectVagueArithmetic);

                    /**
                     * 判断参数 RejectVagueArithmetic 是否已赋值
                     * @return RejectVagueArithmetic 是否已赋值
                     * 
                     */
                    bool RejectVagueArithmeticHasBeenSet() const;

                private:

                    /**
                     * 图片唯一标识，一张图片一个SessionId；
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 图片数据，需要使用base64对图片的二进制数据进行编码，与url参数二者填一即可；
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 HcmAppid 可以在[控制台](https://console.cloud.tencent.com/hcm)【应用管理】下新建。
                     */
                    std::string m_hcmAppid;
                    bool m_hcmAppidHasBeenSet;

                    /**
                     * 图片url，与Image参数二者填一即可；
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 横屏拍摄开关，若开启则支持传输横屏拍摄的图片；
                     */
                    bool m_supportHorizontalImage;
                    bool m_supportHorizontalImageHasBeenSet;

                    /**
                     * 拒绝非速算图（如风景图、人物图）开关，若开启，则遇到非速算图会快速返回拒绝的结果，但极端情况下可能会影响评估结果（比如算式截图贴到风景画里可能被判为非速算图直接返回了）。
                     */
                    bool m_rejectNonArithmeticImage;
                    bool m_rejectNonArithmeticImageHasBeenSet;

                    /**
                     * 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     */
                    int64_t m_isAsync;
                    bool m_isAsyncHasBeenSet;

                    /**
                     * 是否展开耦合算式中的竖式计算
                     */
                    bool m_enableDispRelatedVertical;
                    bool m_enableDispRelatedVerticalHasBeenSet;

                    /**
                     * 是否展示竖式算式的中间结果和格式控制字符
                     */
                    bool m_enableDispMidresult;
                    bool m_enableDispMidresultHasBeenSet;

                    /**
                     * 是否开启pdf识别，默认开启
                     */
                    bool m_enablePdfRecognize;
                    bool m_enablePdfRecognizeHasBeenSet;

                    /**
                     * pdf页码，从0开始，默认为0
                     */
                    int64_t m_pdfPageIndex;
                    bool m_pdfPageIndexHasBeenSet;

                    /**
                     * 是否返回LaTex，默认为0返回普通格式，设置成1返回LaTex格式
                     */
                    int64_t m_laTex;
                    bool m_laTexHasBeenSet;

                    /**
                     * 用于选择是否拒绝模糊题 目。打开则丢弃模糊题目， 不进行后续的判题返回结 果。
                     */
                    bool m_rejectVagueArithmetic;
                    bool m_rejectVagueArithmeticHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONREQUEST_H_
