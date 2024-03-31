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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEURLDETECTIONRESULTRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEURLDETECTIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeUrlDetectionResult返回参数结构体
                */
                class DescribeUrlDetectionResultResponse : public AbstractModel
                {
                public:
                    DescribeUrlDetectionResultResponse();
                    ~DescribeUrlDetectionResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取[查询结果]查询结果；枚举值：0 查询成功，否则查询失败
                     * @return ResultCode [查询结果]查询结果；枚举值：0 查询成功，否则查询失败
                     * 
                     */
                    int64_t GetResultCode() const;

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取[固定信息]响应协议版本号
                     * @return RespVer [固定信息]响应协议版本号
                     * 
                     */
                    int64_t GetRespVer() const;

                    /**
                     * 判断参数 RespVer 是否已赋值
                     * @return RespVer 是否已赋值
                     * 
                     */
                    bool RespVerHasBeenSet() const;

                    /**
                     * 获取[查询结果]url恶意状态
枚举值：
0-1：未知，访问暂无风险。
2 ：	风险网址，具体的恶意类型定义参考恶意大类EvilClass字段。
3-4：安全，访问无风险。

注意：查询结果EvilClass字段在Urltype=2时，才有意义。
                     * @return UrlType [查询结果]url恶意状态
枚举值：
0-1：未知，访问暂无风险。
2 ：	风险网址，具体的恶意类型定义参考恶意大类EvilClass字段。
3-4：安全，访问无风险。

注意：查询结果EvilClass字段在Urltype=2时，才有意义。
                     * 
                     */
                    int64_t GetUrlType() const;

                    /**
                     * 判断参数 UrlType 是否已赋值
                     * @return UrlType 是否已赋值
                     * 
                     */
                    bool UrlTypeHasBeenSet() const;

                    /**
                     * 获取[查询结果]url恶意类型大类:{
    "1": "社工欺诈（仿冒、账号钓鱼、中奖诈骗）",
    "2": "信息诈骗（虚假充值、虚假兼职、虚假金融投资、虚假信用卡代办、网络赌博诈骗）",
    "3": "虚假销售（男女保健美容减肥产品、电子产品、虚假广告、违法销售）",
    "4": "恶意文件（病毒文件，木马文件，恶意apk文件的下载链接以及站点，挂马网站）",
    "5": "博彩网站（博彩网站，在线赌博网站）",
    "6": "色情网站（涉嫌传播色情内容，提供色情服务的网站）"，
    "7": "风险网站（弱类型，传播垃圾信息的网站，如果客户端有阻断，不建议使用这个网站）"，
    "8": "违法网站（根据法律法规不能传播的内容，以及侵犯知识产权的类型）"
  }
                     * @return EvilClass [查询结果]url恶意类型大类:{
    "1": "社工欺诈（仿冒、账号钓鱼、中奖诈骗）",
    "2": "信息诈骗（虚假充值、虚假兼职、虚假金融投资、虚假信用卡代办、网络赌博诈骗）",
    "3": "虚假销售（男女保健美容减肥产品、电子产品、虚假广告、违法销售）",
    "4": "恶意文件（病毒文件，木马文件，恶意apk文件的下载链接以及站点，挂马网站）",
    "5": "博彩网站（博彩网站，在线赌博网站）",
    "6": "色情网站（涉嫌传播色情内容，提供色情服务的网站）"，
    "7": "风险网站（弱类型，传播垃圾信息的网站，如果客户端有阻断，不建议使用这个网站）"，
    "8": "违法网站（根据法律法规不能传播的内容，以及侵犯知识产权的类型）"
  }
                     * 
                     */
                    int64_t GetEvilClass() const;

                    /**
                     * 判断参数 EvilClass 是否已赋值
                     * @return EvilClass 是否已赋值
                     * 
                     */
                    bool EvilClassHasBeenSet() const;

                    /**
                     * 获取该字段暂为空
                     * @return EvilType 该字段暂为空
                     * 
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取该字段暂为空
                     * @return Level 该字段暂为空
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取[查询详情]url检出时间；时间戳
                     * @return DetectTime [查询详情]url检出时间；时间戳
                     * 
                     */
                    int64_t GetDetectTime() const;

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取该字段暂为空
                     * @return Wording 该字段暂为空
                     * 
                     */
                    std::string GetWording() const;

                    /**
                     * 判断参数 Wording 是否已赋值
                     * @return Wording 是否已赋值
                     * 
                     */
                    bool WordingHasBeenSet() const;

                    /**
                     * 获取该字段暂为空
                     * @return WordingTitle 该字段暂为空
                     * 
                     */
                    std::string GetWordingTitle() const;

                    /**
                     * 判断参数 WordingTitle 是否已赋值
                     * @return WordingTitle 是否已赋值
                     * 
                     */
                    bool WordingTitleHasBeenSet() const;

                    /**
                     * 获取[查询结果]url恶意状态说明；为UrlType字段值对应的说明
                     * @return UrlTypeDesc [查询结果]url恶意状态说明；为UrlType字段值对应的说明
                     * 
                     */
                    std::string GetUrlTypeDesc() const;

                    /**
                     * 判断参数 UrlTypeDesc 是否已赋值
                     * @return UrlTypeDesc 是否已赋值
                     * 
                     */
                    bool UrlTypeDescHasBeenSet() const;

                    /**
                     * 获取[查询结果]url恶意大类说明；为EvilClass字段值对应的说明
                     * @return EvilClassDesc [查询结果]url恶意大类说明；为EvilClass字段值对应的说明
                     * 
                     */
                    std::string GetEvilClassDesc() const;

                    /**
                     * 判断参数 EvilClassDesc 是否已赋值
                     * @return EvilClassDesc 是否已赋值
                     * 
                     */
                    bool EvilClassDescHasBeenSet() const;

                    /**
                     * 获取该字段暂为空
                     * @return EvilTypeDesc 该字段暂为空
                     * 
                     */
                    std::string GetEvilTypeDesc() const;

                    /**
                     * 判断参数 EvilTypeDesc 是否已赋值
                     * @return EvilTypeDesc 是否已赋值
                     * 
                     */
                    bool EvilTypeDescHasBeenSet() const;

                    /**
                     * 获取该字段暂为空
                     * @return LevelDesc 该字段暂为空
                     * 
                     */
                    std::string GetLevelDesc() const;

                    /**
                     * 判断参数 LevelDesc 是否已赋值
                     * @return LevelDesc 是否已赋值
                     * 
                     */
                    bool LevelDescHasBeenSet() const;

                private:

                    /**
                     * [查询结果]查询结果；枚举值：0 查询成功，否则查询失败
                     */
                    int64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * [固定信息]响应协议版本号
                     */
                    int64_t m_respVer;
                    bool m_respVerHasBeenSet;

                    /**
                     * [查询结果]url恶意状态
枚举值：
0-1：未知，访问暂无风险。
2 ：	风险网址，具体的恶意类型定义参考恶意大类EvilClass字段。
3-4：安全，访问无风险。

注意：查询结果EvilClass字段在Urltype=2时，才有意义。
                     */
                    int64_t m_urlType;
                    bool m_urlTypeHasBeenSet;

                    /**
                     * [查询结果]url恶意类型大类:{
    "1": "社工欺诈（仿冒、账号钓鱼、中奖诈骗）",
    "2": "信息诈骗（虚假充值、虚假兼职、虚假金融投资、虚假信用卡代办、网络赌博诈骗）",
    "3": "虚假销售（男女保健美容减肥产品、电子产品、虚假广告、违法销售）",
    "4": "恶意文件（病毒文件，木马文件，恶意apk文件的下载链接以及站点，挂马网站）",
    "5": "博彩网站（博彩网站，在线赌博网站）",
    "6": "色情网站（涉嫌传播色情内容，提供色情服务的网站）"，
    "7": "风险网站（弱类型，传播垃圾信息的网站，如果客户端有阻断，不建议使用这个网站）"，
    "8": "违法网站（根据法律法规不能传播的内容，以及侵犯知识产权的类型）"
  }
                     */
                    int64_t m_evilClass;
                    bool m_evilClassHasBeenSet;

                    /**
                     * 该字段暂为空
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 该字段暂为空
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * [查询详情]url检出时间；时间戳
                     */
                    int64_t m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 该字段暂为空
                     */
                    std::string m_wording;
                    bool m_wordingHasBeenSet;

                    /**
                     * 该字段暂为空
                     */
                    std::string m_wordingTitle;
                    bool m_wordingTitleHasBeenSet;

                    /**
                     * [查询结果]url恶意状态说明；为UrlType字段值对应的说明
                     */
                    std::string m_urlTypeDesc;
                    bool m_urlTypeDescHasBeenSet;

                    /**
                     * [查询结果]url恶意大类说明；为EvilClass字段值对应的说明
                     */
                    std::string m_evilClassDesc;
                    bool m_evilClassDescHasBeenSet;

                    /**
                     * 该字段暂为空
                     */
                    std::string m_evilTypeDesc;
                    bool m_evilTypeDescHasBeenSet;

                    /**
                     * 该字段暂为空
                     */
                    std::string m_levelDesc;
                    bool m_levelDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEURLDETECTIONRESULTRESPONSE_H_
