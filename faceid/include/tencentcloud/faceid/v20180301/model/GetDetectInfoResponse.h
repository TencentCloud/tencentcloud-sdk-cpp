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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFORESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetDetectInfo返回参数结构体
                */
                class GetDetectInfoResponse : public AbstractModel
                {
                public:
                    GetDetectInfoResponse();
                    ~GetDetectInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取JSON字符串。
{
  // 文本类信息
  "Text": {
    "ErrCode": null,      // 本次核身最终结果。0为成功
    "ErrMsg": null,       // 本次核身最终结果信息描述。
    "IdCard": "",         // 本次核身最终获得的身份证号。
    "Name": "",           // 本次核身最终获得的姓名。
    "OcrNation": null,    // ocr阶段获取的民族
    "OcrAddress": null,   // ocr阶段获取的地址
    "OcrBirth": null,     // ocr阶段获取的出生信息
    "OcrAuthority": null, // ocr阶段获取的证件签发机关
    "OcrValidDate": null, // ocr阶段获取的证件有效期
    "OcrName": null,      // ocr阶段获取的姓名
    "OcrIdCard": null,    // ocr阶段获取的身份证号
    "OcrGender": null,    // ocr阶段获取的性别
    "LiveStatus": null,   // 活体检测阶段的错误码。0为成功
    "LiveMsg": null,      // 活体检测阶段的错误信息
    "Comparestatus": null,// 一比一阶段的错误码。0为成功
    "Comparemsg": null,   // 一比一阶段的错误信息
    "Sim": null, // 比对相似度
    "Location": null, // 地理位置信息
    "Extra": "",          // DetectAuth结果传进来的Extra信息
    "Detail": {           // 活体一比一信息详情
      "LivenessData": [
            {
              ErrCode: null, // 活体比对验证错误码
              ErrMsg: null, // 活体比对验证错误描述
              ReqTime: null, // 活体验证时间戳
              IdCard: null, // 验证身份证号
              Name: null // 验证姓名
            }
      ]
    }
  },
  // 身份证正反面照片Base64
  "IdCardData": {
    "OcrFront": null,
    "OcrBack": null
  },
  // 视频最佳帧截图Base64
  "BestFrame": {
    "BestFrame": null
  },
  // 活体视频Base64
  "VideoData": {
    "LivenessVideo": null
  }
}
                     * @return DetectInfo JSON字符串。
{
  // 文本类信息
  "Text": {
    "ErrCode": null,      // 本次核身最终结果。0为成功
    "ErrMsg": null,       // 本次核身最终结果信息描述。
    "IdCard": "",         // 本次核身最终获得的身份证号。
    "Name": "",           // 本次核身最终获得的姓名。
    "OcrNation": null,    // ocr阶段获取的民族
    "OcrAddress": null,   // ocr阶段获取的地址
    "OcrBirth": null,     // ocr阶段获取的出生信息
    "OcrAuthority": null, // ocr阶段获取的证件签发机关
    "OcrValidDate": null, // ocr阶段获取的证件有效期
    "OcrName": null,      // ocr阶段获取的姓名
    "OcrIdCard": null,    // ocr阶段获取的身份证号
    "OcrGender": null,    // ocr阶段获取的性别
    "LiveStatus": null,   // 活体检测阶段的错误码。0为成功
    "LiveMsg": null,      // 活体检测阶段的错误信息
    "Comparestatus": null,// 一比一阶段的错误码。0为成功
    "Comparemsg": null,   // 一比一阶段的错误信息
    "Sim": null, // 比对相似度
    "Location": null, // 地理位置信息
    "Extra": "",          // DetectAuth结果传进来的Extra信息
    "Detail": {           // 活体一比一信息详情
      "LivenessData": [
            {
              ErrCode: null, // 活体比对验证错误码
              ErrMsg: null, // 活体比对验证错误描述
              ReqTime: null, // 活体验证时间戳
              IdCard: null, // 验证身份证号
              Name: null // 验证姓名
            }
      ]
    }
  },
  // 身份证正反面照片Base64
  "IdCardData": {
    "OcrFront": null,
    "OcrBack": null
  },
  // 视频最佳帧截图Base64
  "BestFrame": {
    "BestFrame": null
  },
  // 活体视频Base64
  "VideoData": {
    "LivenessVideo": null
  }
}
                     * 
                     */
                    std::string GetDetectInfo() const;

                    /**
                     * 判断参数 DetectInfo 是否已赋值
                     * @return DetectInfo 是否已赋值
                     * 
                     */
                    bool DetectInfoHasBeenSet() const;

                private:

                    /**
                     * JSON字符串。
{
  // 文本类信息
  "Text": {
    "ErrCode": null,      // 本次核身最终结果。0为成功
    "ErrMsg": null,       // 本次核身最终结果信息描述。
    "IdCard": "",         // 本次核身最终获得的身份证号。
    "Name": "",           // 本次核身最终获得的姓名。
    "OcrNation": null,    // ocr阶段获取的民族
    "OcrAddress": null,   // ocr阶段获取的地址
    "OcrBirth": null,     // ocr阶段获取的出生信息
    "OcrAuthority": null, // ocr阶段获取的证件签发机关
    "OcrValidDate": null, // ocr阶段获取的证件有效期
    "OcrName": null,      // ocr阶段获取的姓名
    "OcrIdCard": null,    // ocr阶段获取的身份证号
    "OcrGender": null,    // ocr阶段获取的性别
    "LiveStatus": null,   // 活体检测阶段的错误码。0为成功
    "LiveMsg": null,      // 活体检测阶段的错误信息
    "Comparestatus": null,// 一比一阶段的错误码。0为成功
    "Comparemsg": null,   // 一比一阶段的错误信息
    "Sim": null, // 比对相似度
    "Location": null, // 地理位置信息
    "Extra": "",          // DetectAuth结果传进来的Extra信息
    "Detail": {           // 活体一比一信息详情
      "LivenessData": [
            {
              ErrCode: null, // 活体比对验证错误码
              ErrMsg: null, // 活体比对验证错误描述
              ReqTime: null, // 活体验证时间戳
              IdCard: null, // 验证身份证号
              Name: null // 验证姓名
            }
      ]
    }
  },
  // 身份证正反面照片Base64
  "IdCardData": {
    "OcrFront": null,
    "OcrBack": null
  },
  // 视频最佳帧截图Base64
  "BestFrame": {
    "BestFrame": null
  },
  // 活体视频Base64
  "VideoData": {
    "LivenessVideo": null
  }
}
                     */
                    std::string m_detectInfo;
                    bool m_detectInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFORESPONSE_H_
